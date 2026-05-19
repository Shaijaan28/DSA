#include<stdio.h>
int main(){
    int a;
    printf("Enter First No.: ");
    scanf("%d" ,&a);
    int b;
    printf("Enter 2nd No.: ");
    scanf("%d", &b);

    int sum = a+b;
    printf("%d", sum);
    return 0;
}