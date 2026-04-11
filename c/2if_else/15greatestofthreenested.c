#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter 3rd number : ");
    scanf("%d", &c);
    if (a > b) { // b is out of race
        if(a>c)
        printf("%d is greates ", a);
        else
        printf("%d id greatest,c");
    }
    else{ // B>c -> a ab sabse bada to nhi hai
        if(b>c)
        printf("%d is greatest" , b);
        else // c>b -> a<b<C
        printf("%d is greatest ",c);
    }
    return 0;
}