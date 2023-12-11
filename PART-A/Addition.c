/*
 * File:   Addition.c
 * Author: win-10
 *
 * Created on 1 June, 2023, 8:36 PM
 */


#include <xc.h>

void main(void) {
    static int num1,num2,sum;
    sum=0;
    num1=0x15;
    num2=0x36;
    
    sum=num1+num2;
    
    TRISB=0;
    PORTB=sum;
    return;
}
