#include <iostream>
using namespace std;

void removeDuplicate(int arr[], int &n) {
    if (n <= 1) {
        return;
    }
    int m = 1;
    for (int i = 1; i < n; ++i) {
        bool isDuplicate = false;
        for (int j = 0; j < m; ++j) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr[m] = arr[i];
            ++m;
        }
    }
    n = m;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the values of array: ";
   for(int i=0;i<n;i++)
   cin>>arr[i];

   removeDuplicate(arr, n);

    for (int i = 0; i < n; ++i) {
      cout << arr[i] << " ";
    }
}