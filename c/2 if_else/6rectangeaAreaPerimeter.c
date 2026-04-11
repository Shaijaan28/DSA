#include <stdio.h>
int main (){
    int l;
    printf("Enter lenght : ");
    scanf("%d",&l);
    int b;
    printf("Enter breadth : ");
    scanf("%d",&b);
  
    if (l*b> 2*(l+b)){
        printf("Area is greater than perimeter");
    }
     if (l*b < 2*(l+b)){
        printf("perimeter is greater than area");
     }
    //    if ( l*b  = 2*(l+b)){
    //     printf("perimeter is greater than area");
    //  }
       
    
    return 0;
}