#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[26] = { 0 };
                        // tree #1
                        if (x[2] <= 25.0) {
                            if (x[1] <= 39.0) {
                                if (x[0] <= 268.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[19] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 302.0) {
                                    if (x[0] <= 115.0) {
                                        if (x[0] <= 86.0) {
                                            if (x[0] <= 71.0) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 571.0) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 391.0) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 390.5) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        if (x[1] <= 354.0) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 34.5) {
                                if (x[1] <= 206.0) {
                                    if (x[2] <= 270.5) {
                                        if (x[0] <= 228.5) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 204.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 188.0) {
                                        if (x[2] <= 267.5) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 276.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 230.0) {
                                    if (x[0] <= 257.5) {
                                        if (x[1] <= 131.5) {
                                            if (x[2] <= 276.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 250.0) {
                                                votes[11] += 1;
                                            }

                                            else {
                                                if (x[1] <= 315.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 291.0) {
                                            if (x[3] <= 147.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 340.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[25] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 200.0) {
                                        if (x[3] <= 439.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            if (x[1] <= 250.0) {
                                                votes[21] += 1;
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 301.0) {
                                            if (x[2] <= 220.0) {
                                                votes[23] += 1;
                                            }

                                            else {
                                                if (x[2] <= 356.0) {
                                                    votes[24] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 812.5) {
                                                        votes[24] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[1] <= 23.0) {
                            if (x[0] <= 267.0) {
                                votes[4] += 1;
                            }

                            else {
                                votes[19] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 21.5) {
                                if (x[1] <= 315.5) {
                                    if (x[0] <= 296.0) {
                                        votes[8] += 1;
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 616.0) {
                                        if (x[0] <= 216.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 203.0) {
                                    if (x[2] <= 361.0) {
                                        if (x[3] <= 362.5) {
                                            if (x[3] <= 40.0) {
                                                if (x[1] <= 253.0) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 239.5) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 115.0) {
                                                            votes[22] += 1;
                                                        }

                                                        else {
                                                            votes[17] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 407.0) {
                                                    if (x[2] <= 195.0) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        votes[9] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 124.0) {
                                            if (x[0] <= 117.0) {
                                                if (x[1] <= 296.5) {
                                                    votes[20] += 1;
                                                }

                                                else {
                                                    votes[22] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 382.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 289.5) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        votes[9] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 338.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 37.5) {
                                        if (x[2] <= 270.0) {
                                            if (x[1] <= 204.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 347.5) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 304.0) {
                                            if (x[2] <= 257.0) {
                                                if (x[3] <= 317.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 247.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 812.5) {
                                                        votes[24] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 115.5) {
                                                votes[25] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[2] <= 15.5) {
                            if (x[0] <= 468.0) {
                                if (x[0] <= 284.5) {
                                    if (x[0] <= 123.5) {
                                        if (x[0] <= 109.0) {
                                            if (x[0] <= 99.5) {
                                                if (x[1] <= 52.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 71.0) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 517.0) {
                                                            votes[8] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 69.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 111.5) {
                                                if (x[1] <= 556.5) {
                                                    votes[8] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 48.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 446.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 283.5) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }
                            }

                            else {
                                votes[19] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 223.0) {
                                if (x[1] <= 297.0) {
                                    if (x[2] <= 256.0) {
                                        if (x[1] <= 81.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            if (x[2] <= 129.5) {
                                                if (x[2] <= 120.5) {
                                                    if (x[1] <= 98.0) {
                                                        votes[18] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 293.5) {
                                                            votes[7] += 1;
                                                        }

                                                        else {
                                                            votes[21] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[7] += 1;
                                                }
                                            }

                                            else {
                                                votes[18] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 68.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 215.5) {
                                        if (x[2] <= 146.0) {
                                            if (x[2] <= 127.0) {
                                                if (x[3] <= 60.0) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 417.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            if (x[2] <= 503.5) {
                                                if (x[3] <= 54.0) {
                                                    if (x[2] <= 415.5) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= 307.5) {
                                                        votes[15] += 1;
                                                    }

                                                    else {
                                                        votes[9] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[22] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 297.0) {
                                    if (x[3] <= 46.5) {
                                        if (x[1] <= 138.0) {
                                            if (x[2] <= 289.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 152.5) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                if (x[0] <= 412.0) {
                                                    if (x[0] <= 364.5) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 387.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 418.0) {
                                            if (x[3] <= 258.0) {
                                                if (x[2] <= 273.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 754.0) {
                                                    votes[24] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 274.5) {
                                        if (x[1] <= 345.5) {
                                            if (x[2] <= 263.0) {
                                                if (x[0] <= 334.5) {
                                                    votes[25] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                votes[14] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 43.5) {
                                                if (x[0] <= 396.5) {
                                                    votes[14] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                votes[25] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[1] <= 23.5) {
                            if (x[0] <= 268.0) {
                                votes[4] += 1;
                            }

                            else {
                                votes[19] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 15.5) {
                                if (x[1] <= 315.5) {
                                    if (x[0] <= 299.0) {
                                        votes[8] += 1;
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 306.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 230.0) {
                                    if (x[3] <= 37.5) {
                                        if (x[1] <= 388.5) {
                                            if (x[1] <= 139.5) {
                                                if (x[2] <= 140.5) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 304.5) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 221.0) {
                                                    if (x[0] <= 375.5) {
                                                        if (x[0] <= 250.5) {
                                                            votes[18] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 333.5) {
                                                        if (x[2] <= 269.0) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 381.0) {
                                                if (x[2] <= 134.5) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 142.5) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[22] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 273.0) {
                                            if (x[1] <= 260.0) {
                                                if (x[0] <= 228.5) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 219.5) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    votes[25] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 134.0) {
                                                votes[15] += 1;
                                            }

                                            else {
                                                if (x[2] <= 365.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 244.5) {
                                                        if (x[3] <= 149.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= 177.5) {
                                                                votes[5] += 1;
                                                            }

                                                            else {
                                                                votes[5] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 367.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 301.0) {
                                        if (x[0] <= 196.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            if (x[2] <= 220.0) {
                                                votes[23] += 1;
                                            }

                                            else {
                                                if (x[2] <= 356.0) {
                                                    votes[24] += 1;
                                                }

                                                else {
                                                    if (x[2] <= 359.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[24] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 239.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[1] <= 23.0) {
                            if (x[0] <= 286.5) {
                                votes[4] += 1;
                            }

                            else {
                                votes[19] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 34.5) {
                                if (x[1] <= 359.0) {
                                    if (x[2] <= 253.5) {
                                        if (x[2] <= 40.0) {
                                            if (x[0] <= 296.0) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 196.0) {
                                                if (x[0] <= 228.5) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 231.5) {
                                            if (x[0] <= 209.5) {
                                                votes[20] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 389.5) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 301.5) {
                                        if (x[2] <= 25.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 267.5) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                if (x[0] <= 126.0) {
                                                    votes[22] += 1;
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 75.0) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 213.5) {
                                    if (x[1] <= 256.0) {
                                        if (x[2] <= 246.0) {
                                            if (x[1] <= 112.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                if (x[3] <= 292.5) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[21] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 239.0) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            if (x[1] <= 443.5) {
                                                if (x[3] <= 214.5) {
                                                    votes[15] += 1;
                                                }

                                                else {
                                                    votes[9] += 1;
                                                }
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 301.0) {
                                        if (x[2] <= 340.0) {
                                            if (x[3] <= 250.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 404.5) {
                                                    votes[24] += 1;
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 865.0) {
                                                if (x[3] <= 275.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[24] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 385.5) {
                                            if (x[3] <= 303.5) {
                                                votes[25] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 276.0) {
                                                votes[25] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[2] <= 15.5) {
                            if (x[0] <= 284.5) {
                                if (x[1] <= 446.5) {
                                    if (x[0] <= 103.5) {
                                        if (x[1] <= 52.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 129.0) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            if (x[1] <= 113.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 457.0) {
                                    if (x[1] <= 281.0) {
                                        if (x[1] <= 39.0) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= 507.0) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        if (x[1] <= 74.5) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[0] <= 179.5) {
                                    if (x[1] <= 254.0) {
                                        if (x[2] <= 240.0) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 519.0) {
                                            if (x[0] <= 99.5) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                if (x[0] <= 102.0) {
                                                    votes[22] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 112.5) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 114.0) {
                                                            votes[22] += 1;
                                                        }

                                                        else {
                                                            votes[17] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 421.5) {
                                        if (x[1] <= 232.5) {
                                            if (x[2] <= 275.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 349.5) {
                                                if (x[2] <= 248.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 281.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 414.0) {
                                    if (x[0] <= 219.5) {
                                        if (x[2] <= 192.5) {
                                            if (x[3] <= 140.5) {
                                                if (x[1] <= 290.5) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 137.0) {
                                                if (x[1] <= 390.5) {
                                                    if (x[2] <= 312.0) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 362.0) {
                                            if (x[0] <= 419.0) {
                                                if (x[1] <= 229.5) {
                                                    if (x[2] <= 206.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[24] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[25] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 248.5) {
                                        if (x[1] <= 117.0) {
                                            if (x[3] <= 500.0) {
                                                votes[21] += 1;
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 226.0) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[1] <= 23.0) {
                            if (x[0] <= 253.0) {
                                votes[4] += 1;
                            }

                            else {
                                votes[19] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 15.5) {
                                if (x[0] <= 284.5) {
                                    if (x[0] <= 114.5) {
                                        if (x[0] <= 107.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            if (x[0] <= 111.5) {
                                                if (x[1] <= 562.0) {
                                                    votes[8] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 141.5) {
                                            if (x[1] <= 341.5) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 194.0) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 283.5) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 247.0) {
                                    if (x[3] <= 37.5) {
                                        if (x[0] <= 188.0) {
                                            if (x[0] <= 107.0) {
                                                if (x[2] <= 121.5) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 75.5) {
                                                        votes[22] += 1;
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 308.5) {
                                                    if (x[1] <= 138.5) {
                                                        if (x[2] <= 262.0) {
                                                            votes[18] += 1;
                                                        }

                                                        else {
                                                            votes[20] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[18] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 415.5) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 270.0) {
                                                if (x[1] <= 222.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 216.5) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 389.5) {
                                            if (x[2] <= 389.5) {
                                                if (x[3] <= 157.5) {
                                                    if (x[0] <= 195.5) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= 138.0) {
                                                            if (x[1] <= 215.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[25] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 137.0) {
                                                if (x[2] <= 218.5) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 250.0) {
                                        if (x[2] <= 216.0) {
                                            if (x[3] <= 581.0) {
                                                if (x[0] <= 240.5) {
                                                    votes[21] += 1;
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 276.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[2] <= 15.5) {
                            if (x[0] <= 306.5) {
                                if (x[0] <= 92.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[1] <= 48.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[0] <= 118.0) {
                                            if (x[1] <= 572.5) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 446.5) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 39.0) {
                                    votes[19] += 1;
                                }

                                else {
                                    if (x[0] <= 392.0) {
                                        if (x[0] <= 369.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 273.5) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 34.5) {
                                if (x[1] <= 388.5) {
                                    if (x[0] <= 332.5) {
                                        if (x[2] <= 204.5) {
                                            if (x[2] <= 135.5) {
                                                votes[18] += 1;
                                            }

                                            else {
                                                if (x[2] <= 138.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[18] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 315.0) {
                                                votes[22] += 1;
                                            }

                                            else {
                                                if (x[1] <= 206.0) {
                                                    votes[20] += 1;
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 139.5) {
                                            if (x[1] <= 137.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 138.5) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 302.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 272.5) {
                                        if (x[2] <= 418.0) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 219.5) {
                                    if (x[2] <= 192.5) {
                                        if (x[0] <= 127.5) {
                                            if (x[3] <= 140.5) {
                                                if (x[1] <= 275.0) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 320.0) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    votes[21] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 294.5) {
                                                votes[11] += 1;
                                            }

                                            else {
                                                votes[21] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 139.5) {
                                            if (x[3] <= 199.5) {
                                                if (x[2] <= 391.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 137.0) {
                                                votes[15] += 1;
                                            }

                                            else {
                                                if (x[1] <= 292.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[9] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 250.5) {
                                        if (x[0] <= 442.0) {
                                            if (x[3] <= 132.5) {
                                                votes[25] += 1;
                                            }

                                            else {
                                                if (x[1] <= 226.5) {
                                                    if (x[1] <= 125.5) {
                                                        votes[23] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 371.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 134.5) {
                                                    votes[23] += 1;
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 110.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            if (x[1] <= 266.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[2] <= 21.5) {
                            if (x[1] <= 39.0) {
                                if (x[0] <= 268.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[19] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 271.0) {
                                    if (x[1] <= 87.0) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        if (x[0] <= 254.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 684.5) {
                                        if (x[1] <= 557.0) {
                                            if (x[0] <= 237.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[12] += 1;
                                            }
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 34.5) {
                                if (x[1] <= 104.0) {
                                    if (x[2] <= 296.5) {
                                        votes[18] += 1;
                                    }

                                    else {
                                        votes[20] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 227.0) {
                                        if (x[0] <= 195.0) {
                                            if (x[2] <= 130.0) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                if (x[1] <= 314.5) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 133.5) {
                                                if (x[1] <= 196.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 212.5) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 209.5) {
                                            if (x[1] <= 252.5) {
                                                votes[20] += 1;
                                            }

                                            else {
                                                if (x[0] <= 122.5) {
                                                    votes[22] += 1;
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 231.5) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                if (x[0] <= 389.5) {
                                                    votes[14] += 1;
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 210.0) {
                                    if (x[2] <= 194.5) {
                                        if (x[3] <= 331.5) {
                                            if (x[3] <= 140.5) {
                                                if (x[1] <= 283.0) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 250.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[1] <= 443.5) {
                                                if (x[3] <= 187.0) {
                                                    votes[15] += 1;
                                                }

                                                else {
                                                    votes[9] += 1;
                                                }
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 257.0) {
                                        if (x[3] <= 247.5) {
                                            if (x[2] <= 273.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 406.0) {
                                                votes[24] += 1;
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 368.0) {
                                            if (x[1] <= 418.5) {
                                                votes[25] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 252.5) {
                                                votes[25] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[2] <= 15.5) {
                            if (x[0] <= 284.5) {
                                if (x[1] <= 48.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[1] <= 386.0) {
                                        votes[8] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 430.5) {
                                    if (x[0] <= 395.5) {
                                        votes[12] += 1;
                                    }

                                    else {
                                        if (x[1] <= 298.5) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 283.0) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 203.0) {
                                if (x[3] <= 34.5) {
                                    if (x[1] <= 254.0) {
                                        if (x[2] <= 270.5) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 370.5) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 230.0) {
                                        if (x[1] <= 140.5) {
                                            if (x[3] <= 156.0) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 255.0) {
                                                votes[11] += 1;
                                            }

                                            else {
                                                if (x[1] <= 338.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 184.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 113.0) {
                                    if (x[1] <= 215.5) {
                                        votes[23] += 1;
                                    }

                                    else {
                                        votes[25] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 249.0) {
                                        if (x[1] <= 240.0) {
                                            if (x[3] <= 67.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[1] <= 125.5) {
                                                    votes[23] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 359.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[3] <= 249.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 263.5) {
                                            if (x[1] <= 115.0) {
                                                votes[24] += 1;
                                            }

                                            else {
                                                if (x[3] <= 71.0) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #11
                        if (x[2] <= 21.5) {
                            if (x[1] <= 320.0) {
                                if (x[0] <= 413.5) {
                                    if (x[1] <= 44.5) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[1] <= 97.5) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            if (x[0] <= 297.5) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[19] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 631.5) {
                                    if (x[0] <= 255.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= 34.5) {
                                if (x[0] <= 190.5) {
                                    if (x[0] <= 105.5) {
                                        if (x[2] <= 121.5) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            if (x[2] <= 303.0) {
                                                if (x[2] <= 177.0) {
                                                    if (x[0] <= 102.5) {
                                                        votes[18] += 1;
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }

                                            else {
                                                votes[20] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 286.0) {
                                            if (x[2] <= 144.5) {
                                                if (x[1] <= 299.0) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 489.5) {
                                                if (x[0] <= 117.0) {
                                                    if (x[1] <= 343.0) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[20] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 518.5) {
                                                    votes[22] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 305.0) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 282.5) {
                                        if (x[2] <= 290.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 263.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 219.5) {
                                    if (x[2] <= 194.5) {
                                        if (x[3] <= 331.5) {
                                            if (x[3] <= 170.0) {
                                                if (x[0] <= 138.0) {
                                                    if (x[2] <= 126.5) {
                                                        if (x[1] <= 290.5) {
                                                            votes[7] += 1;
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 143.0) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            if (x[1] <= 297.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                if (x[1] <= 462.0) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 301.0) {
                                        if (x[2] <= 257.0) {
                                            if (x[3] <= 317.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 247.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 357.0) {
                                                    votes[24] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 196.0) {
                                                        votes[24] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 291.0) {
                                            votes[25] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #12
                        if (x[2] <= 15.5) {
                            if (x[1] <= 616.0) {
                                if (x[0] <= 431.5) {
                                    if (x[1] <= 52.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[0] <= 229.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            if (x[1] <= 269.5) {
                                                votes[13] += 1;
                                            }

                                            else {
                                                votes[12] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 461.5) {
                                        if (x[1] <= 67.0) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            if (x[1] <= 350.0) {
                                                votes[13] += 1;
                                            }

                                            else {
                                                votes[12] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 74.5) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[0] <= 188.0) {
                                    if (x[1] <= 268.0) {
                                        if (x[2] <= 243.0) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 415.5) {
                                            votes[17] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 256.5) {
                                        if (x[1] <= 228.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 231.5) {
                                            votes[10] += 1;
                                        }

                                        else {
                                            if (x[2] <= 598.5) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 228.5) {
                                    if (x[0] <= 256.0) {
                                        if (x[1] <= 298.5) {
                                            if (x[3] <= 144.0) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 255.0) {
                                                votes[11] += 1;
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 291.0) {
                                            if (x[2] <= 273.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[25] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 210.0) {
                                        if (x[2] <= 184.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 254.0) {
                                            if (x[0] <= 334.5) {
                                                votes[24] += 1;
                                            }

                                            else {
                                                if (x[2] <= 249.5) {
                                                    votes[23] += 1;
                                                }

                                                else {
                                                    votes[24] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #13
                        if (x[1] <= 27.0) {
                            if (x[0] <= 285.5) {
                                votes[4] += 1;
                            }

                            else {
                                votes[19] += 1;
                            }
                        }

                        else {
                            if (x[1] <= 286.5) {
                                if (x[3] <= 34.5) {
                                    if (x[2] <= 51.5) {
                                        if (x[0] <= 251.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 260.5) {
                                            if (x[1] <= 79.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[0] <= 238.0) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 305.5) {
                                                if (x[1] <= 207.0) {
                                                    votes[20] += 1;
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 275.0) {
                                        if (x[3] <= 140.5) {
                                            if (x[2] <= 96.0) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                if (x[1] <= 106.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 121.5) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 365.5) {
                                                            votes[7] += 1;
                                                        }

                                                        else {
                                                            votes[5] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 273.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 233.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 220.0) {
                                            if (x[0] <= 244.5) {
                                                votes[21] += 1;
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }

                                        else {
                                            votes[24] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 228.0) {
                                    if (x[0] <= 281.0) {
                                        if (x[2] <= 21.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 40.0) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 115.0) {
                                            if (x[1] <= 406.0) {
                                                if (x[1] <= 328.0) {
                                                    if (x[2] <= 82.5) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[25] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 43.5) {
                                                    votes[12] += 1;
                                                }

                                                else {
                                                    votes[25] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 447.5) {
                                                if (x[2] <= 141.5) {
                                                    if (x[3] <= 225.5) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 159.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 189.0) {
                                        if (x[0] <= 223.0) {
                                            if (x[3] <= 50.5) {
                                                if (x[1] <= 461.0) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    votes[22] += 1;
                                                }
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }
                        }

                        // tree #14
                        if (x[2] <= 15.5) {
                            if (x[0] <= 423.5) {
                                if (x[0] <= 302.0) {
                                    if (x[1] <= 48.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        if (x[1] <= 391.0) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 390.5) {
                                        if (x[1] <= 283.5) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 284.5) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 461.5) {
                                    if (x[1] <= 67.0) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        if (x[1] <= 350.5) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 74.5) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 37.5) {
                                if (x[2] <= 303.0) {
                                    if (x[1] <= 226.0) {
                                        if (x[0] <= 219.0) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 347.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[0] <= 272.5) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 334.5) {
                                        if (x[1] <= 427.5) {
                                            if (x[0] <= 179.0) {
                                                votes[20] += 1;
                                            }

                                            else {
                                                if (x[0] <= 292.0) {
                                                    if (x[1] <= 196.5) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 350.5) {
                                            if (x[0] <= 337.5) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                votes[14] += 1;
                                            }
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 210.0) {
                                    if (x[3] <= 230.0) {
                                        if (x[2] <= 254.5) {
                                            if (x[3] <= 116.5) {
                                                if (x[0] <= 134.0) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 250.0) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 136.0) {
                                                votes[15] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 245.5) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 304.0) {
                                        if (x[0] <= 326.5) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            if (x[2] <= 360.5) {
                                                if (x[1] <= 125.5) {
                                                    if (x[3] <= 259.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 115.5) {
                                            votes[25] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #15
                        if (x[2] <= 25.0) {
                            if (x[1] <= 39.0) {
                                if (x[0] <= 281.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[19] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 315.5) {
                                    if (x[0] <= 281.0) {
                                        votes[8] += 1;
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 616.0) {
                                        if (x[0] <= 216.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 203.0) {
                                if (x[2] <= 228.0) {
                                    if (x[1] <= 250.0) {
                                        if (x[3] <= 34.5) {
                                            votes[18] += 1;
                                        }

                                        else {
                                            if (x[1] <= 112.5) {
                                                if (x[0] <= 96.5) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 110.0) {
                                                        votes[21] += 1;
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= 292.5) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[21] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 142.5) {
                                            if (x[2] <= 116.0) {
                                                if (x[3] <= 58.5) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 108.5) {
                                                    if (x[3] <= 60.0) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 125.5) {
                                                        if (x[3] <= 69.5) {
                                                            votes[17] += 1;
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 50.5) {
                                        if (x[1] <= 252.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            if (x[2] <= 267.5) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                if (x[1] <= 478.5) {
                                                    if (x[2] <= 312.5) {
                                                        votes[22] += 1;
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[22] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 230.0) {
                                            if (x[1] <= 329.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 414.0) {
                                    if (x[3] <= 37.5) {
                                        if (x[2] <= 263.0) {
                                            if (x[0] <= 420.5) {
                                                if (x[0] <= 347.0) {
                                                    if (x[2] <= 131.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 391.0) {
                                                        if (x[2] <= 134.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 350.5) {
                                                if (x[2] <= 415.0) {
                                                    votes[14] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 228.5) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 304.0) {
                                            if (x[2] <= 242.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 115.0) {
                                                    votes[24] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 806.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[25] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 222.0) {
                                        votes[23] += 1;
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }
                            }
                        }

                        // tree #16
                        if (x[0] <= 203.0) {
                            if (x[2] <= 15.5) {
                                if (x[1] <= 52.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    if (x[1] <= 345.0) {
                                        votes[8] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 34.5) {
                                    if (x[0] <= 117.0) {
                                        if (x[1] <= 246.5) {
                                            if (x[2] <= 243.0) {
                                                votes[18] += 1;
                                            }

                                            else {
                                                votes[20] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 448.5) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                if (x[2] <= 332.5) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    votes[22] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 123.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            if (x[2] <= 152.5) {
                                                votes[18] += 1;
                                            }

                                            else {
                                                if (x[0] <= 131.5) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 143.0) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 311.5) {
                                        if (x[2] <= 246.0) {
                                            if (x[3] <= 292.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[21] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 200.5) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            if (x[3] <= 206.0) {
                                                votes[15] += 1;
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 40.0) {
                                if (x[1] <= 39.0) {
                                    votes[19] += 1;
                                }

                                else {
                                    if (x[0] <= 369.5) {
                                        if (x[1] <= 663.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 425.0) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            if (x[1] <= 357.5) {
                                                votes[13] += 1;
                                            }

                                            else {
                                                votes[12] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 221.0) {
                                    if (x[2] <= 249.0) {
                                        if (x[2] <= 157.0) {
                                            if (x[3] <= 280.0) {
                                                if (x[1] <= 104.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 84.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 72.5) {
                                            votes[10] += 1;
                                        }

                                        else {
                                            if (x[2] <= 369.0) {
                                                if (x[0] <= 290.0) {
                                                    if (x[0] <= 260.5) {
                                                        votes[24] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[24] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 363.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[24] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 271.5) {
                                        if (x[3] <= 37.5) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            if (x[3] <= 293.0) {
                                                votes[25] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 598.5) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[1] <= 23.0) {
                            if (x[0] <= 286.5) {
                                votes[4] += 1;
                            }

                            else {
                                votes[19] += 1;
                            }
                        }

                        else {
                            if (x[3] <= 230.0) {
                                if (x[3] <= 37.5) {
                                    if (x[1] <= 359.0) {
                                        if (x[2] <= 253.5) {
                                            if (x[0] <= 229.0) {
                                                if (x[2] <= 45.5) {
                                                    votes[8] += 1;
                                                }

                                                else {
                                                    votes[18] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 431.0) {
                                                    if (x[2] <= 61.0) {
                                                        votes[13] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 185.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 144.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[13] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 486.5) {
                                                if (x[0] <= 179.0) {
                                                    votes[20] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 214.0) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 347.5) {
                                                    if (x[0] <= 220.0) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 279.5) {
                                            if (x[0] <= 132.0) {
                                                if (x[1] <= 650.0) {
                                                    if (x[2] <= 415.5) {
                                                        if (x[0] <= 115.0) {
                                                            if (x[2] <= 239.5) {
                                                                votes[17] += 1;
                                                            }

                                                            else {
                                                                votes[22] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 25.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 83.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 59.0) {
                                                votes[12] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 260.0) {
                                        if (x[2] <= 265.0) {
                                            if (x[0] <= 232.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 519.0) {
                                                if (x[0] <= 207.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 413.0) {
                                            votes[25] += 1;
                                        }

                                        else {
                                            if (x[1] <= 491.5) {
                                                if (x[2] <= 252.5) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 207.5) {
                                    if (x[1] <= 222.5) {
                                        if (x[0] <= 244.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 235.5) {
                                        votes[24] += 1;
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[2] <= 15.5) {
                            if (x[0] <= 279.5) {
                                if (x[1] <= 391.0) {
                                    if (x[1] <= 52.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 461.5) {
                                    if (x[1] <= 283.5) {
                                        if (x[1] <= 39.0) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 74.5) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[3] <= 34.5) {
                                if (x[0] <= 188.0) {
                                    if (x[2] <= 303.0) {
                                        if (x[0] <= 115.5) {
                                            if (x[1] <= 238.5) {
                                                votes[18] += 1;
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 147.5) {
                                                if (x[0] <= 121.0) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 295.0) {
                                                        votes[18] += 1;
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 296.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 263.0) {
                                        if (x[1] <= 203.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 540.5) {
                                            if (x[1] <= 230.5) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                votes[14] += 1;
                                            }
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 209.5) {
                                    if (x[3] <= 230.0) {
                                        if (x[2] <= 257.0) {
                                            if (x[3] <= 140.5) {
                                                if (x[0] <= 130.0) {
                                                    if (x[1] <= 300.5) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 309.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 184.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 369.0) {
                                        if (x[3] <= 380.5) {
                                            if (x[1] <= 304.0) {
                                                if (x[1] <= 115.5) {
                                                    if (x[2] <= 218.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[24] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[25] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 246.5) {
                                                if (x[2] <= 216.0) {
                                                    votes[23] += 1;
                                                }

                                                else {
                                                    votes[24] += 1;
                                                }
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #19
                        if (x[2] <= 15.5) {
                            if (x[0] <= 284.5) {
                                if (x[1] <= 446.5) {
                                    if (x[0] <= 107.5) {
                                        if (x[0] <= 99.5) {
                                            if (x[0] <= 92.0) {
                                                if (x[1] <= 52.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 57.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 48.0) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 44.5) {
                                    votes[19] += 1;
                                }

                                else {
                                    if (x[1] <= 358.5) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 210.0) {
                                if (x[2] <= 239.5) {
                                    if (x[2] <= 120.0) {
                                        if (x[1] <= 247.0) {
                                            if (x[2] <= 114.5) {
                                                if (x[3] <= 293.5) {
                                                    if (x[2] <= 96.0) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= 109.0) {
                                                            votes[18] += 1;
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[21] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 252.0) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    votes[21] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 40.0) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 271.0) {
                                            if (x[2] <= 132.5) {
                                                if (x[3] <= 353.0) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[21] += 1;
                                                }
                                            }

                                            else {
                                                votes[18] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 432.5) {
                                                if (x[0] <= 92.0) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 85.0) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 243.5) {
                                        if (x[1] <= 262.5) {
                                            if (x[3] <= 68.5) {
                                                votes[20] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 50.5) {
                                                votes[22] += 1;
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 284.0) {
                                    if (x[0] <= 505.5) {
                                        if (x[2] <= 341.0) {
                                            if (x[0] <= 330.5) {
                                                votes[24] += 1;
                                            }

                                            else {
                                                if (x[3] <= 46.5) {
                                                    if (x[1] <= 204.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 133.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 71.0) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                if (x[2] <= 467.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[24] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 479.0) {
                                            if (x[2] <= 484.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 274.5) {
                                        if (x[3] <= 43.5) {
                                            if (x[2] <= 283.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[14] += 1;
                                            }
                                        }

                                        else {
                                            votes[25] += 1;
                                        }
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[1] <= 23.0) {
                            if (x[0] <= 280.0) {
                                votes[4] += 1;
                            }

                            else {
                                votes[19] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 218.0) {
                                if (x[2] <= 15.5) {
                                    if (x[1] <= 391.0) {
                                        votes[8] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 297.0) {
                                        if (x[2] <= 240.0) {
                                            if (x[3] <= 43.5) {
                                                votes[18] += 1;
                                            }

                                            else {
                                                if (x[1] <= 124.5) {
                                                    if (x[3] <= 300.5) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        votes[21] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[21] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 68.5) {
                                                votes[20] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 40.0) {
                                            if (x[0] <= 75.5) {
                                                votes[22] += 1;
                                            }

                                            else {
                                                if (x[0] <= 109.0) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 119.5) {
                                                        if (x[2] <= 330.0) {
                                                            votes[17] += 1;
                                                        }

                                                        else {
                                                            votes[22] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 445.0) {
                                                if (x[3] <= 185.5) {
                                                    if (x[3] <= 127.5) {
                                                        votes[11] += 1;
                                                    }

                                                    else {
                                                        votes[15] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[9] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 270.0) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 40.0) {
                                    if (x[1] <= 288.0) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        if (x[1] <= 760.0) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 242.5) {
                                        if (x[1] <= 259.0) {
                                            if (x[3] <= 353.0) {
                                                if (x[0] <= 409.0) {
                                                    votes[3] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 584.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 786.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 113.0) {
                                                if (x[3] <= 37.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[25] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 141.5) {
                                                    if (x[3] <= 209.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 341.0) {
                                            votes[24] += 1;
                                        }

                                        else {
                                            if (x[3] <= 72.5) {
                                                if (x[0] <= 353.0) {
                                                    if (x[1] <= 197.0) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 865.0) {
                                                    if (x[2] <= 501.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[1] <= 168.5) {
                                                            votes[24] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 26; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "a";
                            case 1:
                            return "b";
                            case 2:
                            return "c";
                            case 3:
                            return "d";
                            case 4:
                            return "e";
                            case 5:
                            return "f";
                            case 6:
                            return "g";
                            case 7:
                            return "h";
                            case 8:
                            return "i";
                            case 9:
                            return "j";
                            case 10:
                            return "k";
                            case 11:
                            return "l";
                            case 12:
                            return "m";
                            case 13:
                            return "n";
                            case 14:
                            return "o";
                            case 15:
                            return "p";
                            case 16:
                            return "q";
                            case 17:
                            return "r";
                            case 18:
                            return "s";
                            case 19:
                            return "t";
                            case 20:
                            return "u";
                            case 21:
                            return "v";
                            case 22:
                            return "w";
                            case 23:
                            return "x";
                            case 24:
                            return "y";
                            case 25:
                            return "z";
                            default:
                            return " ";
                        }
                    }

                protected:
                };
            }
        }
    }