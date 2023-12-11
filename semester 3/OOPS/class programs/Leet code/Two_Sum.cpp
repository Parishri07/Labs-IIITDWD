#include<iostream>
using namespace std;

int main(){
    int n,target;
    cout<<"Enter the size: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the target: ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]== target){
              cout<<"["<<i+1<<","<<j+1<<"]";
              break;
            }
        }
    }
    return 0;
}