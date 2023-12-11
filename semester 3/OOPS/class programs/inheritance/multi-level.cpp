#include<iostream>
using namespace std;

class student{
   public:
    string name;
    void print(){
        cout<<"Name: "<<name<<endl;
    }
};

class professor: public student{
    public:
      string prof_name;
      void print(){
        cout<<"Professor name: "<<prof_name<<endl;
      }
   
};

class semester1: public professor{
    public:
   int marksa, marksb;
};

int main(){
    semester1 s;
    s.name = "Neil";
    s.prof_name = "Ashwin";
    s.marksa = 90;
    s.marksb = 100;
    s.print();
    cout<<"Marks of subject 1: "<<s.marksa<<endl;
    cout<<"Marks of subject 2: "<<s.marksb;
    return 0;
}