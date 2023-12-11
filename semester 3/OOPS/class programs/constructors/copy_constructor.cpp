//copy constructor
#include<iostream>
using namespace std;

class student{
    public:
     string name, dept;
     int marks;
     student(string d){
        dept = d;
     }
     student(student &s){
       dept = s.dept;
     }
     void print();
};

void student::print(){
    cout<<"Name is "<<name<<endl;
    cout<<"Department is "<<dept<<endl;
    cout<<"Marks is "<<marks<<endl;
} 

int main(){
  student s("CSE");
  student p(s);
  s.name = "Neil";
  s.marks = 100;
  p.name = "Kenil";
  p.marks = 60;
  s.print();
  p.print();
}