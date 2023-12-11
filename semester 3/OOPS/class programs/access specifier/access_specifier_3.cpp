#include<iostream>
using namespace std;
class student
{
  public:    // Public access specifier
    string name;   // Public attribute

  private:   // Private access specifier
    int marks;   // Private attribute

  public:
    void print_students()
    {
        cout << "The Student Name is: " << name << endl;
    }
    void print_details(int m)
    {
        marks=m;
        cout << "The marks obtained is: " << marks << endl;
    }
};

int main() {
  student s;
  s.name = "Manjunath";  // Allowed (public)
  s.print_students();
  s.print_details(88);
  return 0;
}

