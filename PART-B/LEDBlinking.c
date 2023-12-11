/*
 * File:   LEDBlinking.c
 * Author: win-10
 *
 * Created on 2 June, 2023, 11:10 PM
 */


#include <xc.h>
#pragma config OSC=HS
#pragma config WDT=OFF
#pragma config LVP=OFF
#pragma config PBADEN=OFF

void msdelay(unsigned int time);
void main(void) {
    TRISD=0;
    while(1){
        PORTD=0xFF;
        msdelay(250);
        PORTD=0x00;
        msdelay(250);
    }
    return;
}
void msdelay(unsigned int time){
    unsigned int i,j;
    for(i=0;i<time;i++){
        for(j=0;j<710;j++){
            
        }
    }
}
