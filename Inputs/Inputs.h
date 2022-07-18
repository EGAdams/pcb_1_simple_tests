#ifndef INPUTS_H
#define INPUTS_H

#include "Arduino.h"
#include "Morse.h"

class Inputs {
public:
    Inputs();
    ~Inputs();
    int readReset();
    int readUndo();
};

#endif