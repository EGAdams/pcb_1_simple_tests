#include <Morse.h>
#include "Arduino.h"
#include <Inputs.h>

Morse morse( 42 );
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

    morse.ledOn( TEAM_A_POINT_1 );
    morse.ledOn( TEAM_B_POINT_1 );

    // RESET test
    if ( inputs.readReset() == LOW ) {
        while ( inputs.readReset() == LOW ) {}
        delay( 50 );
        morse.ledOn( TEAM_A_POINT_0 );
    } else {
        morse.ledOff( TEAM_A_POINT_0 );
    }

    // UNDO test
    if ( inputs.readUndo() == LOW ) {
        while( inputs.readUndo() == LOW ) {}
        delay( 50 );
        morse.ledOn( TEAM_B_POINT_0 );
    } else {
        morse.ledOff( TEAM_B_POINT_0 );
    }

    // RESET test
    if ( inputs.readReset() == 0 ) {
        while ( inputs.readReset() == 0 ) {}
        delay( 50 );
        morse.ledOn( TEAM_A_POINT_0 );
    } else {
        morse.ledOff( TEAM_A_POINT_0 );
    }

    // UNDO test
    if ( inputs.readUndo() == 0 ) {
        while( inputs.readUndo() == 0 ) {}
        delay( 50 );
        morse.ledOn( TEAM_B_POINT_0 );
    } else {
        morse.ledOff( TEAM_B_POINT_0 );
    }



    // POINT 2 LED REVERSED LOGIC ...

        // RESET test
    if ( inputs.readReset() == HIGH ) {
        morse.ledOn( TEAM_A_POINT_2 );
    } else {
        morse.ledOff( TEAM_A_POINT_2 );
    }

    // UNDO test
    if ( inputs.readUndo() == HIGH ) {
        morse.ledOn( TEAM_B_POINT_2 );
    } else {
        morse.ledOff( TEAM_B_POINT_2 );
    }

    // RESET test
    if ( inputs.readReset() == 1 ) {
        morse.ledOn( TEAM_A_POINT_2 );
    } else {
        morse.ledOff( TEAM_A_POINT_2 );
    }

    // UNDO test
    if ( inputs.readUndo() == 1 ) {
        morse.ledOn( TEAM_B_POINT_2 );
    } else {
        morse.ledOff( TEAM_B_POINT_2 );
    }
}
