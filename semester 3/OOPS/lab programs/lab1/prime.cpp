#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    
    for(i=2;i<n;i++){
        if(n%i==0)
        break;
    }
    if(n==1)
    cout<<"Neither prime nor composite number";
    else if(i==n)
    cout<<"Prime number";
    else
    cout<<"Not a prime number";
    return 0;
}