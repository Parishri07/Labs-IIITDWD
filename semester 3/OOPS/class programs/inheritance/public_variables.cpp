#include<iostream>
using namespace std;

class student{
    public:
    string name;
};

class semester1: public student{
    public:
    int marksa, marksb;
};

int main(){
    semester1 s;
    s.name = "Neil";
    s.marksa = 90;
    s.marksb = 100;

    cout<<"Name: "<<s.name<<endl;
    cout<<"Marks of subject 1: "<<s.marksa<<endl;
    cout<<"Marks of subject 2: "<<s.marksb;
    return 0;
}