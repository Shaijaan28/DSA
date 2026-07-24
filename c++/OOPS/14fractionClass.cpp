#include<iostream>
using namespace std;
class Fraction {
public:    
    int num;
    int den;
    Fraction(int num , int den){
        this->num =num;
        this->den =den;
    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }
};
int main (){
    Fraction f1(1,2);
    Fraction f2(1,3);
    f1.display();
    f2.display();

}