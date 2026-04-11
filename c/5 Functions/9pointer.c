#include<stdio.h>
int main (){
    int a=25;
    int*x = &a; //int * int ka address store krta hai
     //vvip-> *=7 ; - a is changed...
    int**y = &x; // int ** -> int * ka address save krta hai
    
   printf("%d\n" ,*x); // %p se address pata chlta hai.
   printf("%d\n" ,**y);
    printf("%d\n" ,a);
   

return 0;
}