/*
 * File:   buzzer.c
 * Author: win-10
 *
 * Created on 3 June, 2023, 12:18 AM
 */


#include <xc.h>

#pragma config OSC=HS
#pragma config WDT=OFF
#pragma config LVP=OFF
#pragma config PBADEN=OFF

void __interrupt() timer0_isr(void){
    TMR0H=0x85;
    TMR0L=0xEE;
    PORTBbits.RB3=~PORTBbits.RB3;
    INTCONbits.TMR0IF=0;
}

void main(void) {
    ADCON1=0x0F;
    TRISBbits.TRISB3=0;
    PORTBbits.RB3=0;
    T0CON=0x02;
    TMR0H=0x85;
    TMR0L=0xEE;
    INTCONbits.TMR0IF=0;
    INTCONbits.TMR0IE=1;
    T0CONbits.TMR0ON=1;
    INTCONbits.GIE=1;   
    return;
}
