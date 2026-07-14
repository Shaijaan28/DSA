#include<iostream>
using namespace std;
class Car{ // car is a new data type
public:
    string name;
    int price;
    int seats;
    string type;
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.seats<<" "<<c.type<<" "<<endl; 
}
int main (){
    Car c1;
    c1.name ="Honda City";
    c1.price = 150000;
    c1.seats =5;
    c1.type = "Sedan";

    Car c2;
    c2.name ="Kia";
    c2.price = 300000;
    c2.seats =8;
    c2.type = "SUV";

    Car c3;
    c3.name ="Swift";
    c3.price = 600000;
    c3.seats =6;
    c3.type = "Maruti";

    print(c1);
    print(c2);
    print(c3);



}