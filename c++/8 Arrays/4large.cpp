#include<iostream>
using namespace std;
int main (){
    int nums[]= {5,15,22,1,-15,-24};
    int size= 6;
    int largest= INT8_MIN;
    int smallest = INT16_MAX;
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }

    }
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest = nums[i];
        }

    }
    cout<< "smallest = "<< smallest << endl;
    cout << "largest= "<< largest << endl;
    
    return 0;
}