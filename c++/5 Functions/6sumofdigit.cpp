#include <iostream>
using namespace std;
    int sumOfDigits(int num ){
      
      int digitsum=0;
      while(num>0){
        int lastDig = num%10;
        num = num / 10;
         digitsum+= lastDig;
      }
      return digitsum;
    }
int main(){
    cout<< "sum = " <<sumOfDigits(1234) << endl;

   return 0; 
}