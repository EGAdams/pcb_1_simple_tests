/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

#define TEAM_A_POINT_0 19
#define TEAM_B_POINT_0 0
#define TEAM_A_POINT_1 18
#define TEAM_B_POINT_1 1
#define TEAM_A_POINT_2 15
#define TEAM_B_POINT_2 2
#define UNDO           26
#define RESET          38

class Morse
{
  public:
    Morse( int pin );
    void dot();
    void dash();
    void ledOn(  int pin );
    void ledOff( int pin );

  private:
    int _pin;
};

#endif

