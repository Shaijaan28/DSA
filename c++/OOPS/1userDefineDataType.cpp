#include<iostream>
using namespace std;
class Student{ // student is a new data type
public:
    string name;
    int rno;
    float gpa;
};
int main (){
    Student s1 ;
    s1.name ="Rauf";
    s1.rno = 49;
    s1.gpa = 6.55;

    Student s2;
    s2.name ="mazid";
    //s2.rno = 56;
    s2.gpa =5.5;
    cin>>s2.rno;

    cout<<s1.name<<" "<<s2.rno<<endl;;
}