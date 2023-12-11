#include<iostream>
using namespace std;

class student{
    public:
     string name, dept;
     int marks, total;
     student(){
        dept = "DSAI";
     }
     void print();
    void operator + (student a){
        total = marks + a.marks;
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
  s+p;
  //the second operand is parameter
  s.print();
  p.print();
  cout<<"Total marks are: "<<s.total<<endl;
}