#ifndef SWRST_LIB
#define SWRST_LIB

#include <Arduino.h>

#define FULL true
#define SIMPLE false

void(* resetFunc) (void) = 0;

void softwareReset(bool mode)
{
    noInterrupts();
    
    if(mode)
    {
       PORTA = 0;
       PORTB = 0;
       PORTC = 0;
       PORTD = 0;
        
       #ifdef PORTE
        PORTE = 0;
        PORTF = 0;
        PORTG = 0;
        PORTH = 0;
        PORTJ = 0;
        PORTK = 0;
        PORTL = 0;
       #endif
        
       resetFunc();
        
    }
    else resetFunc();    
}

#endif