#include <iostream>
using namespace std;

int main(){
    int n,pos;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

      cout<<"Enter the values of array: ";
   for(int i=0;i<n;i++){
   cin>>arr[i];
   }

   cout<<"Enter position: ";
   cin>>pos;

   cout<<"Element at given position: "<<arr[pos+1];
   return 0;
}