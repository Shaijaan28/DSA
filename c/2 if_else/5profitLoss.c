#include <stdio.h>
int main (){
    int n; 
    printf("Enter selling price  : ");
    scanf("%d",&n);
    int m;
    printf("Enter Cost price :");
    scanf("%d" , &m);
    if (n>m){
        printf("Profit");
    }
    else if(n<m) {
        printf("Loss ");
    }
    else {
        printf("No profir No loss");
    }
    return 0;
}