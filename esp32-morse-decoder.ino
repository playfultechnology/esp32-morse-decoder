/**
 * ESP32 Morse decoder using trained machine learning model
 */

// DEFINES
// IS_TRAINING should be defined when gathering training data
// Otherwise, comment out to use the model to classify inputs
// #define IS_TRAINING

// INCLUDES
// See https://github.com/LennartHennigs/Button2
#include "src/Button2.h"
// See https://github.com/mathertel/LiquidCrystal_PCF8574
#include "src/LiquidCrystal_PCF8574.h"
// Uncomment when doing classification
#ifndef IS_TRAINING
  #include "model.h"
#endif

// CONSTANTS
// This pin will be used to read dots and dashes - could be connected to any digital input that can be sustained - e.g. a mic, light sensor, or button
const byte inputPin = 16;
// This pin will be driven HIGH when input is being received
const byte buzzerPin = 5;
// This LED will light up when receiving character input
const byte ledPin = 2;
// Every letter can be represented by a maximum of four Morse dots/dashes (if including numbers, this needs to increase to five)
const byte patternLength = 4;
// The maximum allowed space between "dots" and "dashes" within the same character
// If the time elapsed since last input was received exceeds this value, we'll move onto the next character 
const int intraCharacterPause = 500;

// GLOBALS
// A button object 
Button2 button;
// The duration of inputs received in the current pattern 
float pattern[patternLength];
// The time at which the last input was received
unsigned long lastReleaseTime;
// Counter of how many elements (dots/dashes) have been received in the current pattern
uint8_t counter;
// How many characters (a/b/c/...) have been received/decoded
uint8_t charsReceived;
// If we're not training...
#ifndef IS_TRAINING
  // Grab a reference to the model's classifier function exported from SciKit-Learn
  Eloquent::ML::Port::RandomForest classifier;
#endif
LiquidCrystal_PCF8574 lcd(0x27);  //LCD address is 0x27 for PCF8574 and 0x3F for PCF8574A

void setup() {
  // Initialise serial monitor connection
  Serial.begin(115200);
  Serial.println(__FILE__ __DATE__);

  // Initialise LED and buzzer pins used for user feedback
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  // See http://playground.arduino.cc/Main/I2cScanner how to test for a I2C device.
  Wire.begin();
  lcd.begin(16, 2);
  lcd.setBacklight(200);
  lcd.print("Morse Decoder");
  delay(1000);
  lcd.clear();

  // Configure the button input
  // Anything less than 30ms we won't register as an input at all  
  button.setDebounceTime(30);
  button.setPressedHandler(onButtonPress);
  button.setReleasedHandler(onButtonRelease);
  button.begin(inputPin);
}

// Called when a complete character pattern has been received
void onCharacterReceive() {
    charsReceived++;    
    if(charsReceived % 16 == 0) {
      lcd.setCursor(0, 1);
    }
    if(charsReceived % 32 == 0) {
      lcd.clear();
      lcd.setCursor(0, 0);
    }

    // If we're gathering training data
    #ifdef IS_TRAINING
      // Send the pattern input to the serial monitor
      for(int i=0; i<patternLength; i++) {
        Serial.print(pattern[i]);
        Serial.print(i==patternLength-1 ? '\n' : ',');
      }
    // If we're applying the classifier function
    #else
      // Return the classifier's prediction
      char* result = (char*)classifier.predictLabel(pattern);
      // Send to the serial monitor
      Serial.println(classifier.predictLabel(pattern));
      // Send to the LCD display
      lcd.print(result);
    #endif

    // Reset the counter and pattern array
    counter = 0;
    memset(pattern, 0, sizeof(pattern));

    // Turn LED off to show we have finished reading input
    digitalWrite(ledPin, LOW);
}

// When any sort of input is received
void onButtonPress(Button2& btn) {
  // Turn the LED on when we're recording input
  digitalWrite(ledPin, HIGH);
  // Make the buzzer sound
  digitalWrite(buzzerPin, HIGH);  
}

// When any sort of input ends
void onButtonRelease(Button2& btn) {
    // Record how long the most recent input lasted for
    unsigned int duration = btn.wasPressedFor();
    // Store it in the pattern array
    pattern[counter] = duration;
    // Store the current time
    lastReleaseTime = millis();
    // Increment the index in the pattern array
    counter++;
    // If we've recorded the maximum number of dots/dashes, we know the input
    // must have ended
    if(counter == patternLength) {
      onCharacterReceive();
    }
    // Turn the buzzer off
    digitalWrite(buzzerPin, LOW);
}

void loop() {
  // Read button input
  button.loop();

  // If we've received at least one dot/dash, but user is not currently inputting anything, and the time elapsed 
  // since last input was released exceeds threshold
  if(!button.isPressed() && counter > 0 && millis() - lastReleaseTime > intraCharacterPause) {    
    // Assume the character has ended
    onCharacterReceive();
  }
}