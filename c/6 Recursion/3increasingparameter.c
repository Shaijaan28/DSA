#include<stdio.h>
void increasing (int n , int x){
    if(x>n) return;
   printf("%d\n",x);
   increasing(x+1,n);
    return;
}
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    increasing(1,n);
    return 0;
    }