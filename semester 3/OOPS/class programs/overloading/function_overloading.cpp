#include<iostream>
using namespace std;

class student{
    public:
     string name, dept;
     int marks_a, marks_b, marks_c, marks_d, total;
     student(){
        dept = "DSAI";
     }
     void print();
    int calc_total(int marks_a, int marks_b, int marks_c, int marks_d);
    int calc_total(int marks_a, int marks_b, int marks_c);
    
    // int average(int sum);
    // float average(float sum);
};

void student::print(){
    cout<<"Name is "<<name<<endl;
    cout<<"Department is "<<dept<<endl;
    cout<<"Marks is "<<marks_a<<endl;
    cout<<"Marks is "<<marks_b<<endl;
    cout<<"Marks is "<<marks_c<<endl;
    cout<<"Marks is "<<marks_d<<endl;
    cout<<"Total marks are: "<<total<<endl;
} 

int student::calc_total(int marks_a, int marks_b, int marks_c, int marks_d){
    total = marks_a + marks_b + marks_c + marks_d;
}

int student::calc_total(int marks_a, int marks_b, int marks_c){
    total = marks_a + marks_b + marks_c;
}

int main(){
  student s,p;
  s.name = "Neil";
  s.marks_a = 100;
  s.marks_b = 90;
  s.marks_c = 80;
  s.marks_d = 70;
  p.name = "Kenil";
  p.marks_a = 80;
  p.marks_b = 100;
  p.marks_c = 90;
  p.marks_d = 60;
  s.calc_total(s.marks_a, s.marks_b, s.marks_c, s.marks_d);
  p.calc_total(p.marks_a, p.marks_b, p.marks_c);
  s.print();
  p.print();
}