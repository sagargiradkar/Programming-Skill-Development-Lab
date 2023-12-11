/*
 * File:   swap.c
 * Author: win-10
 *
 * Created on 1 June, 2023, 8:58 PM
 */


#include <xc.h>

void main(void) {
    int source[]={0x01,0x02,0x03,0x04,0x05};
    int dest[]={0x06,0x07,0x08,0x09,0x10};
    int i,temp;
    for(i=0;i<5;i++){
        temp=source[i];
        source[i]=dest[i];
        dest[i]=temp;
    }
    return;
}
