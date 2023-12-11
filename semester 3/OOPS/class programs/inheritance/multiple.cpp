#include<iostream>
using namespace std;

class professor{
    public:
      string prof_name;
      void print(){
        cout<<"Professor name: "<<prof_name<<endl;
      }
};

class marks{
    public:
   int marksa, marksb;
   void print(){
    cout<<"Marks 1: "<<marksa<<endl;
    cout<<"Marks 2: "<<marksb<<endl;
   }
};

class student: public professor, public marks{
   public:
    string name;
    void print(){
    }
};

int main(){
    student s;
    s.name = "Neil";
    s.prof_name = "Ashwin";
    s.marksa = 90;
    s.marksb = 100;
    cout<<"Name: "<<s.name<<endl;
    s.professor::print();
    s.marks::print();
    return 0;
}