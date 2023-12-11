#include<iostream>
using namespace std;

class student
{

   public:
    string name;
    void print_details()
    {
        cout << "The Student Name is: " << name << endl;
        cout << "The marks obtained is: " << marks << endl;
    }
    int marks;
};

int main()
{
  student s;
  s.name = "Manjunath";
  s.marks = 88;
  s.print_details();

  return 0;
}
