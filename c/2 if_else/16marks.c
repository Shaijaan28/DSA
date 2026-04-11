#include <stdio.h>
int main (){
    int n;
    printf("Enter Percentage : ");
    scanf("%d",&n);
    //more than 80 A
    // if (n>80){
    //     printf("A garde");
    // }
    //  else if (n>60){
    //     printf("B garde");
    // }
    //  else if (n>40){
    //     printf("C garde");
    // }
    // else{
    //     printf("D garde");
    // }  (2nd method)>>>>>>>>>>>>>
    if (n>80){
        printf("A grade");
    }
    else {
        if (n>60){
            printf("B grade");
        }
else {
    if(n>40){
        printf("C garde ");
    }
    else{
        printf("D garde");
    }
}
    }
    return 0;
}