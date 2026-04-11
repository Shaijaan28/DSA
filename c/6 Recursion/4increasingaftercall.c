#include<stdio.h>
void increasing (int n){
    if(n==0) return;    // base call
     printf("%d\n" , n); //code
   increasing(n-1);     // call
   
    return;
}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d" , &n);
    increasing(n);
    return 0;
    }