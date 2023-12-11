#include<iostream>
using namespace std;

class studentOne{
    public:
     string name, dept;
     int marks;
     studentOne(){
        dept = "DSAI";
     }
     void print();
};

void studentOne::print(){
    cout<<"Name is "<<name<<endl;
    cout<<"Department is "<<dept<<endl;
    cout<<"Marks is "<<marks<<endl;
} 

int main(){
  studentOne s,p;
  s.name = "Neil";
  s.marks = 100;
  p.name = "Kenil";
  p.marks = 80;
  s.print();
  p.print();
}