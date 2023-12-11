#include<iostream>
using namespace std;
class student
{
  public:    // Public access specifier
    string name;   // Public attribute
    void print(int m)
    {
       print_details(m);
    }

  private:   // Private access specifier
    int marks;   // Private attribute
  private:
    void print_details(int m)
    {
        marks=m;
        cout << "The Student Name is: " << name << endl;
        cout << "The marks obtained is: " << m << endl;
    }

};

int main() {
  student s;
  s.name = "Manjunath";  // Allowed (public)
  s.print(81);
  return 0;
}

