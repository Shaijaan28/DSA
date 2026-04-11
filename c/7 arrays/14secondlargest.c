#include<stdio.h>
#include<limits.h>
int main (){
     int arr[7] = {1,4,2,8,-19,5,-12};
    int max = INT_MIN; // sabse chota no.
     int smax = INT_MIN; 
    for(int i=0 ; i<=6; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0 ; i<=6; i++){
        if(max<arr[i]){
            smax = arr[i];
        }
    }
    // for(int i=0; i<=6; i++){
    //     if(max<arr[i]){
    //         smax=max;
    //         max = arr[i];
    //     }
    //}
    printf("%d", smax);
    return 0;
}
