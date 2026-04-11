#include<stdio.h>
int main (){
    int a=2;
    int b;
    
     printf("Enter power :");
    scanf("%d" ,&b);
    int power = 1;
    for(int i=1; i<=b ; i++){
        power = power * a ;
        printf(" 2 raisde to the power %d is %d\n" , i ,power);
    }


}