#include<stdio.h>
void reverse (int arr[]){
    int i=0;
    int j=6;
    while(i<j){
        //arr[i]and arr[j];
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j]= temp;
       i++;
       j--;

    }
    return ;
}
