#include<iostream>
using namespace std;

class studentTwo{
    public:
     string name, dept, hostel;
     int marks;
     studentTwo(){
        dept = "DSAI";
     }
     studentTwo(string d){
        dept = d;
     }
     studentTwo(string d, string h){
        dept = d;
        hostel = h;
     }
     void print();
};

void studentTwo::print(){
    cout<<"Name is "<<name<<endl;
    cout<<"Department is "<<dept<<endl;
    cout<<"Marks is "<<marks<<endl;
    cout<<"Hostel is "<<hostel<<endl;
} 

int main(){
  studentTwo s,p("CSE","VI");
  s.name = "Neil";
  s.marks = 100;
  s.hostel = 'V';
  p.name = "Kenil";
  p.marks = 80;
  s.print();
  p.print();
}