#include <iostream>
using namespace std;

int main(){
    int n,count=0,digit;
    cout<<"Enter a number: ";
    cin>>n;

    while(n>0){
        digit = n%10;
        n=n/10;
        if(digit == 1)
        count++;
    }

    cout<<"Number of ones: "<<count;
}