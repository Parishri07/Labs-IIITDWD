#include<iostream>
using namespace std;

class student{
    public:
     string name, dept;
     int marks;
     student(){
        dept = "DSAI";
     }
     void print();
    void operator ++ (){
        marks = marks + 2;
    }
};

void student::print(){
    cout<<"Name is "<<name<<endl;
    cout<<"Department is "<<dept<<endl;
    cout<<"Marks is "<<marks<<endl;
} 

int main(){
  student s,p;
  s.name = "Neil";
  s.marks = 90;
  p.name = "Kenil";
  p.marks = 80;
  ++s;
  //the operand is to be added after operator
  s.print();
  p.print();
}