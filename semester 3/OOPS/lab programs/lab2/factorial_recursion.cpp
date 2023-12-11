#include<iostream>
using namespace std;

int recursion(int n)
{
   if(n>1){
      return recursion(n-1) * n;
   }
   else
   return 1;
}
int main()
{
    int n,fact=1;
    cout<<"Enter a number: ";
    cin>>n;
    fact = recursion(n);
    cout<<fact;
    return 0;
}
