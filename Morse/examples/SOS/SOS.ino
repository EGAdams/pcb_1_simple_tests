#include <Morse.h>
#include "Arduino.h"
#include <Inputs.h>

Morse morse( 19 );
Inputs inputs;

void setup() {
    pinMode( TEAM_A_POINT_0, OUTPUT );
    pinMode( TEAM_B_POINT_0, OUTPUT );
    pinMode( TEAM_A_POINT_1, OUTPUT );
    pinMode( TEAM_B_POINT_1, OUTPUT );
    pinMode( TEAM_A_POINT_2, OUTPUT );
    pinMode( TEAM_B_POINT_2, OUTPUT );
    pinMode( UNDO,           INPUT  );
    pinMode( RESET,          INPUT  );
}

void loop() {

    morse.dot();
    morse.dash();
    morse.dot();
    morse.dash();
    morse.dot();
    morse.dash();
    morse.dot();
    morse.dash();

    // RESET test
    // if ( inputs.readReset() == 0 ) {
    //     while ( inputs.readReset() == 0 ) {
    //         delay( 50 );
    //         morse.ledOn( TEAM_A_POINT_0 );
    //         delay( 250 );
    //     }
    //     morse.ledOff( TEAM_A_POINT_0 );
    // } else {
    //     morse.ledOff( TEAM_A_POINT_0 );
    // }

    // UNDO test
    // if ( inputs.readUndo() == 0 ) {
    //     while( inputs.readUndo() == 0 ) {
    //         delay( 50 );
    //         morse.ledOn( TEAM_B_POINT_0 );
    //         delay( 250 );
    //     }
    //     morse.ledOff( TEAM_B_POINT_0 );
    // } else {
    //     morse.ledOff( TEAM_B_POINT_0 );
    // }
}

/*
 * 
 * PCB#1 PB.tv2
 * Test Version 2
 * 
 * Monday July 18, 2022  2:40 PM
 * 
 * Team A Point 0 should blink.
 * 
 */
