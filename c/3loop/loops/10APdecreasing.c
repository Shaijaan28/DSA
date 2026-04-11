// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter a Number : ");
//     scanf("%d" ,& n);
//     for(int i=100; i<= 103 - 3*n ; i=i-3){
//         printf("%d ", i);
//     }
//     return 0;
// }
// 2nd method

// #include<stdio.h>
// int main (){
//     int n;
//     printf("Enter a Number : ");
//     scanf("%d" ,& n);
//     int a = 100;
//     for(int i=1; i<=n ; i++){
//         printf("%d ", a);
//         a = a - 3;
//     }
//}
// 
// till positive

#include<stdio.h>
int main (){
    // int n;
    // printf("Enter a Number : ");
    // scanf("%d" ,& n);
    int a = 100;
    for(int i=1; a>0 ; i++){
        printf("%d ", a);
        a = a - 3;
    }
    return 0;
}