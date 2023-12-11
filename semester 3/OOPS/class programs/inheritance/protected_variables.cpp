#include<iostream>
using namespace std;

class student{
    protected:
    string name;
};

class semester1: protected student{
    public:
    int marksa, marksb;
    void setName(string n);
    string getName();
};

void semester1::setName(string n){
    name = n;
} 

string semester1::getName(){
    return name;
}

int main(){
    semester1 s;
    // s.name = "Neil";
    s.marksa = 90;
    s.marksb = 100;
    s.setName("Preet");

    cout<<"Name: "<<s.getName()<<endl;
    cout<<"Marks of subject 1: "<<s.marksa<<endl;
    cout<<"Marks of subject 2: "<<s.marksb;
    return 0;
}