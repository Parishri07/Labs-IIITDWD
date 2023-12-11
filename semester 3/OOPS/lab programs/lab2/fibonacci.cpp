#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int a=0, b=1;
    int sum=a+b; 
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
       cout<<sum<<" ";
       a=b;
       b=sum;
       sum=a+b;
    }

    return 0;
}