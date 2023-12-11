/*
 * File:   bubbleSort.c
 * Author: win-10
 *
 * Created on 1 June, 2023, 9:07 PM
 */


#include <xc.h>

void main(void) {
    int arr[]={0x05,0x54,0x63,0x87,0x65,0x85};
    int temp;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return;
}
