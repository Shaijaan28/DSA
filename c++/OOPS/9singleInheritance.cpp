#include<iostream>
using namespace std;
class Scooty{ //parent class
public:
    int topSpeed;
    float mileage;
private:
    int bootSpace;    
};
class Bike : public Scooty{ // child class / derived class
public:
    // int topSpeed;
    // float mileage;
    int gears;    
};
int main (){
    Bike b1;
    b1.topSpeed =180;
    b1.mileage = 40;
    b1.gears =5;
    
}