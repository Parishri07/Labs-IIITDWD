#include <iostream>
using namespace std;

class complex{
 public:
  int real, img;

  void input(){
    cout<<"Enter real and imaginary part of the complex number: ";
    cin>>real>>img;
  }

  void operator + (complex n){
     cout<<"Sum is: "<<(real + n.real)<<" + "<<(img + n.img)<<"i"<<endl;
  }

  void display(){
    cout<<real<<" + "<<img<<"i"<<endl;
  }
};

int main()
{
    complex c1, c2;
    c1.input();
    c2.input();
    cout<<"First complex number: ";
    c1.display();
    cout<<"Second complex number: ";
    c2.display();
    c1+c2;
    return 0;
}