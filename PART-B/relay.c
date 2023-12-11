/*
 * File:   relay.c
 * Author: win-10
 *
 * Created on 3 June, 2023, 12:46 AM
 */


#include <xc.h>

#pragma config OSC=HS
#pragma config WDT=OFF
#pragma config LVP=OFF
#pragma config PBADEN=OFF

void __interrupt(high_priority) switch_isr(void){
    PORTBbits.RB2=~PORTBbits.RB2;
    INTCONbits.TMR0IF=0;
}
void main(void) {
    
    ADCON1=0x0F;
    TRISBbits.TRISB2=0;
    PORTBbits.RB2=0;
    TRISBbits.TRISB0=1;
    INTCON2=0x00;
    INTCONbits.INT0IF=0;
    INTCONbits.INT0E=1;
    INTCONbits.GIE=1;
    
    while(1);
    
    return;
}
