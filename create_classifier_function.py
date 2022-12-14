# Train a machine-learning model to classify Morse code input
#
# Requirements
# - SciKit-Learn to create the model (tested with v1.2.0)
# - MicroMLGen to export it in Arduino-usable C code (tested with v1.1.28)
#
# These dependencies can be installed from command-line as follows:
# pip install -U scikit-learn
# pip install micromlgen

# For loading training dataset from .csv files
import numpy as np
from glob import glob
from os.path import basename
# Import chosen classifier function
# (for alternatives see https://github.com/eloquentarduino/micromlgen)
from sklearn.ensemble import RandomForestClassifier
# For exporting model to Arduino C code
from micromlgen import port

# Load training dataset from csv files 
def load_features(folder):
    dataset = None
    classmap = {}
    for class_idx, filename in enumerate(glob('%s/*.csv' % folder)):
        class_name = basename(filename)[:-4]
        classmap[class_idx] = class_name
        samples = np.loadtxt(filename, dtype=float, delimiter=',')
        labels = np.ones((len(samples), 1)) * class_idx
        samples = np.hstack((samples, labels))
        dataset = samples if dataset is None else np.vstack((dataset, samples))
    return dataset, classmap

# Load data, apply classifier, output as Arduino format 
if __name__ == '__main__':
    # Load training data from the specified subfolder
    features, classmap = load_features('training_data')
    # Create classifier function from feature set
    X, y = features[:, :-1], features[:, -1]
    classifier = RandomForestClassifier(20, max_depth=10).fit(X, y)
    # Use MicroMLgen to port classifier to Arduino C-code
    c_code = port(classifier, classmap=classmap)
    # Show generated code
    print(c_code)
