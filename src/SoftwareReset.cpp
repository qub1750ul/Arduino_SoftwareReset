#include "SoftwareReset.h"

void softwareReset(uint8_t mode)
{
    switch(mode)
    {
        case 0:
            SWRST_STD();
            break;
            
        case 1:
            SWRST_ALTERNATIVE();
            break;
            
        case 2:
            SWRST_SKETCH();
            break;
    }
}

void SWRST_DISABLE()
{
    #ifdef MCUSR
    MCUSR = 0;
    wdt_disable();
    #endif
}

void SWRST_STD()
{
    do
    {
        wdt_enable(WDTO_15MS);
        for(;;) {};
        
    } while(0);
}

void SWRST_SKETCH()
{
    asm volatile (" jmp 0");
}

void SWRST_ALTERNATIVE()
{
    //disable interrupts during the reset
    
    noInterrupts();
    
    //reset interrupt related registers
    
    #ifdef EIMSK
    EIMSK = 0;
    #endif
    
    #ifdef EICRA
    EICRA = 0;
    #endif
    
    #ifdef EICRB
    EICRB = 0;
    #endif
    
    #ifdef PCMSK0
    PCMSK0 = 0;
    #endif
    
    #ifdef PCMSK1
    PCMSK1 = 0;
    #endif
    
    #ifdef PCMSK2
    PCMSK2 = 0;
    #endif
    
    //reset GPIO related registers
    
    #ifdef DDRA
    DDRA = PORTA = 0;
    #endif
    
    #ifdef DDRB
    DDRB = PORTB = 0;
    #endif
    
    #ifdef DDRC
    DDRC = PORTC = 0;
    #endif
    
    #ifdef DDRD
    DDRD = PORTD = 0;
    #endif
    
    #ifdef DDRE
    DDRE = PORTE = 0;
    #endif
    
    #ifdef DDRF
    DDRF = PORTF = 0;
    #endif
    
    #ifdef DDRG
    DDRG = PORTG = 0;
    #endif
    
    #ifdef DDRH
    DDRH = PORTH = 0;
    #endif
    
    #ifdef DDRJ
    DDRJ = PORTJ = 0;
    #endif
    
    #ifdef DDRK
    DDRK = PORTK = 0;
    #endif
    
    #ifdef DDRL
    DDRL = PORTL = 0;
    #endif
    
    //reset the status register, including the interrupt global enable
    
    #ifdef SREG
    SREG = 0;
    #endif
    
    //restart sketch
    
    SWRST_SKETCH();
    
}