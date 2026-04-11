#include <stdio.h>
int main (){
int x=3,y,z;
y=x=10;
z= x<10;
printf("\nx = %d y=%d z=%d" , x,y,z);// true 1 false 0  
   return 0;
}