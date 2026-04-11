#include<stdio.h>
int main (){
int x,y;
   printf("Enter x : ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
   
    
    if ( x==0 && y==0) {
        printf(" origin  ");
    }
    else if(x==0){
       printf("y axis");
    }
         else if (y==0){
            printf("x axis");
         }
        else{
            printf("no x and y axis  and also not origin");
        }
    
    return 0;
}