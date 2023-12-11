#include <iostream>
using namespace std;



int main(){
    int n,m;
    cout<<"Enter size of array 1 and array 2: ";
    cin>>n>>m;
    int a[n],b[m],merge[m+n];

    cout<<"Enter the values of array 1: ";
   for(int i=0;i<n;i++)
   cin>>a[i];
    
    cout<<"Enter the values of array 2: ";
   for(int i=0;i<m;i++)
   cin>>b[i];

   for (int i=0;i<n;++i) {
        merge[i] = a[i];
    }
    for (int i=0;i<m;++i) {
        merge[i+n] = b[i];
    }
    cout<<"Merged Array: ";
    for (int i = 0; i <n+m; ++i) {
        cout << merge[i] << " ";
    }
}