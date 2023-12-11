
#include<iostream>
using namespace std;
class student
{
  public:
    string name;
    int marks;
    void print();
};

void student::print()
{
    cout<<"The Student Name is: "<<name<<endl;
    cout<<"The Marks is: "<<marks<<endl;
}

int main() {
  student s[4];
  int counter,i;
  cout<< "Enter the number of students: ";
  cin>>counter;
  for(i=0;i<counter;i++)
  {
      cout<<"Enter the details (Name and Marks) of "<< i+1 << " student"<<endl;
      cin>>s[i].name;
      cin>>s[i].marks;
  }
  for(i=0;i<counter;i++)
  {
      s[i].print();
  }
  return 0;
}

