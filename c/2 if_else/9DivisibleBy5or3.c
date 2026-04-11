#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n%5==0 ||  n%3==0  ){
        printf("This Number is divisble by 5 and 3");
    }
        else{
        printf("This Number is not  divisble by 5 and 3");
    }
    return 0;
}