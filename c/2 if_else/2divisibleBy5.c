#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n%5==0){
        printf("This Number is divisible by 5");
    }
        else{
        printf("This Number is not divisible by 5 ");
    }
    return 0;
}