#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

     cout<<"Enter the values of array: ";
   for(int i=0;i<n;i++)
   cin>>arr[i];


    int largest = arr[0], smallest = arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]>largest)
       largest = arr[i];
       if(arr[i]<smallest)
       smallest = arr[i];
    }
    cout<<"Largest and smallest elements are: "<<largest<<" and "<<smallest;
    return 0;
}