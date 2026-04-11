#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st side : ");
    scanf("%d", &a);
    printf("Enter 2nd side : ");
    scanf("%d", &b);
    printf("Enter 3rd side : ");
    scanf("%d", &c);
    if (a+b>c && a+c>b && b+c>a){
        printf("it can be a tringle");
    }
    else{
         printf("it can not be a tringle");
    
    }
    return 0;
}