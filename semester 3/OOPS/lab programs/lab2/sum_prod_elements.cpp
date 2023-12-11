#include <iostream>
using namespace std;

int main(){
    int n,sum=0,prod=1;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter the elements of the array: ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
        prod*=arr[i];
    }
    cout<<"Sum and product are: "<<sum<<" "<<prod;
    return 0;
}