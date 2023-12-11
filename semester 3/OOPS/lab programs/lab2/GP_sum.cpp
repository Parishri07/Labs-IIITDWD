#include <iostream>
using namespace std;

int main(){
    int r,a,n;
    cout<<"Enter the first term, common ratio and number of terms: ";
    cin>>a>>r>>n;

    int sum=0;
    
    for(int i=1;i<=n;i++){
        sum += (a*r^(i-1));
    }
    cout<<"Sum is: "<<sum;
    return 0;
}