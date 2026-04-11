#include<stdio.h>
int main (){
 int n;
 printf("Enter number of row : ");
 scanf("%d" ,&n);
// int m;
//  printf("Enter number of column : ");
//  scanf("%d" ,&m);
 for(int i =1; i<=n;i++){ 
   int a=1;
 for(int j=1; j<=i ; j++){ 
    int d = a+64;
char ch =(char)d;// ch = (char)65
    printf("%c  " , ch);
    a++;
      
 }
  printf("\n");
}

return 0;
}