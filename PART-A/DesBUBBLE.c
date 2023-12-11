/*
 * File:   DesBUBBLE.c
 * Author: win-10
 *
 * Created on 1 June, 2023, 9:13 PM
 */


#include <xc.h>

void main(void) {
    int arr[]={0x09,0x08,0x01,0x10,0x35,0x54};
    int temp,i,j;
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                temp=arr[j];
            }
        }
    }
    return;
}
