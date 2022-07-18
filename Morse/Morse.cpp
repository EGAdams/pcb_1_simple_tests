/*
  Morse.cpp - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Morse.h"

Morse::Morse( int pin ) {
  pinMode( pin, OUTPUT );
  _pin = pin; }

void Morse::dot() {
  digitalWrite( _pin, HIGH );
  delay( 250 );
  digitalWrite( _pin, LOW );
  delay( 250 ); }

void Morse::dash() {
  digitalWrite( _pin, HIGH );
  delay( 1000 );
  digitalWrite( _pin, LOW );
  delay( 250 ); }

void Morse::ledOn(  int pin ) { digitalWrite( pin, HIGH ); }

void Morse::ledOff( int pin ) { digitalWrite( pin, LOW ); }
