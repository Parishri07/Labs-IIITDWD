#include<iostream>
#include<math.h>
using namespace std;

int countDigits(int n){
    int digit,ctr=0;
    while(n>0){
        digit= n%10;
        n=n/10;
        ctr++;
    }
    return ctr;
}

int main(){
    int n,sum=0,digit,p;
    cout<<"Enter a number: ";
    cin>>n;
    p=n;
    int ctr=countDigits(n);
    
    while(n>0){
       digit= n%10;
       n=n/10; 
       sum+=pow(digit,ctr);
    }
    
    if(sum==p)
    cout<<"Armstrong number";
    else
    cout<<"Not an armstrong number";
    return 0;
}