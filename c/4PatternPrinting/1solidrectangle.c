#include<stdio.h>
int main (){
 int n;
 printf("Enter number of row : ");
 scanf("%d" ,&n);
int m;
 printf("Enter number of column : ");
 scanf("%d" ,&m);
 for(int i =1; i<=m;i++){ // outer loops - no of lines
 for(int i=1; i<=n ; i++){ 
    printf("*");
      
 }
  printf("\n");
}

return 0;
} 