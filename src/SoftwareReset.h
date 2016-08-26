#ifndef _SWRST_LIB
#define _SWRST_LIB

#include <Arduino.h>
#include <avr/wdt.h>

#define STANDARD 0
#define ALTERNATIVE 1
#define SKETCH 2

void softwareReset(uint8_t mode);

void SWRST_DISABLE(void) __attribute__((naked)) __attribute__((section(".init3"))); //disable software reset after successful reset

void SWRST_STD();
void SWRST_ALTERNATIVE();
void SWRST_SKETCH();


#endif
