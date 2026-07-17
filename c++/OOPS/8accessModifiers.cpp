#include<iostream>
using namespace std;
class Student{
public:    
    int rno;
    string name;
    Student(){

    }
    Student(int rno, string name, float marks){
        this->rno = rno;
        this->name =name;
        this->marks = marks ;
    }
    float getMarks(){
        return marks;
    }
private:
    float marks;

   
};
int main (){
    Student s1(76,"Raghav",73.2);
    Student s2;
    s2.rno =42;
    s2.name ="shaijaan";

    cout <<s1.getMarks();
    
    
}