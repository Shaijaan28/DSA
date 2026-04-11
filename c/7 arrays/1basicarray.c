#include<stdio.h>
int main (){
    int arr[5];
    for(int i=0 ;i<=4 ; i++){
      
        printf("Enter element number %d\n",i+1);
        scanf("%d" ,& arr[i]);
    }
  for(int i=0 ; i<5 ; i++){
    printf("%d " , arr[i]);
  }
    // float arr[5] = {2.1,3.5,6.8,8.5,9.7};
    // arr[4] = 100;// {2,4,6,8,100}
    // arr[1] =1; // {2,1,6,8,100}
    // printf("%f" , arr[2]);

    // char arr[4] = {'a', 'n', 'Y'};
    // arr[4] = 100;// {2,4,6,8,100}
    // arr[1] =1; // {2,1,6,8,100}
    // printf("%d" , arr[2]);
    

    return 0;
}  