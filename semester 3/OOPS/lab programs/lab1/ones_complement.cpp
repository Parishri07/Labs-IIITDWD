#include<iostream>
using namespace std;

int main(){
    int n,digit,arr[20],ctr=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0){
        digit= n%10;
        if(digit==0)
        arr[ctr]=1;
        else
        arr[ctr]=0;
        ctr++;
        n=n/10;
    }
    for(int i=ctr-1;i>=0;i--)
    cout<<arr[i];
    return 0;
}