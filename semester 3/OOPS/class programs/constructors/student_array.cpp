#include<iostream>
using namespace std;

class student{
    public:
     string name, dept;
     student(){
        dept = "DSAI";
     }
     void print();
};

void student::print(){
    cout<<"Name is "<<name<<endl;
    cout<<"Department is "<<dept<<endl;
} 

int main(){
  student s[4];
  int ctr,i;
  cout<<"Enter the number of students: ";
  cin>>ctr;
  for(int i=0;i<ctr;i++){
    cout<<"Enter the name and department of student "<<i+1<<": ";
    cin>>s[i].name;
    cin>>s[i].dept;
  }
  cout<<"The details of the students: "<<endl;
  for(int i=0;i<ctr;i++){
    s[i].print();
  }
}