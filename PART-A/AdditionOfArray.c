/*
 * File:   AdditionOfArray.c
 * Author: win-10
 *
 * Created on 1 June, 2023, 8:47 PM
 */


#include <xc.h>

void main(void) {
    
    static int sum;
    sum=0;
    
    int arr[]={0x01,0x02,0x03,0x03,0x05};
    
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    TRISB=0;
    PORTB=sum;
    return;
}
