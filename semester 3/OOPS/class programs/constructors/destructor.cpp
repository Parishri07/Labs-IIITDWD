#include<iostream>
using namespace std;

class studentOne{
    public:
     string name, dept;
     int marks;
     studentOne(string d){
        dept = d;
     }
     void print();
     ~studentOne();
};

void studentOne::print(){
    cout<<"Name is "<<name<<endl;
    cout<<"Department is "<<dept<<endl;
    cout<<"Marks is "<<marks<<endl;
} 

 studentOne:: ~studentOne(){
   cout<<"This is a desctructor"<<endl;
}

int main(){
  studentOne s("IT");
  studentOne p(s);
  s.name = "Neil";
  s.marks = 100;
  p.name = "Kenil";
  p.marks = 80;
  s.print();
  p.print();
}