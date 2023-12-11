#include <iostream>
using namespace std;

int main(){
    int n,tmp;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the values of array: ";
   for(int i=0;i<n;i++)
   cin>>arr[i];

for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }
   }

   cout<<"Second largest and second smallest elements are: "<<arr[1]<<" and "<<arr[n-2];
   return 0;
}
   