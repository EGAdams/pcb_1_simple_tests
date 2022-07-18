#include "Inputs.h"
#include "Arduino.h"

Inputs::Inputs(){}
Inputs::~Inputs(){}

int Inputs::readReset(){ return digitalRead( RESET ); }
int Inputs::readUndo(){  return digitalRead( UNDO  ); }