#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0)
        sum+=i;
    }
    if(n==sum)
    cout<<"Perfect Number";
    else
    cout<<"Not a perfect number";
}