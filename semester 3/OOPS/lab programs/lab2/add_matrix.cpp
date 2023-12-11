#include <iostream>
using namespace std;

int main()
{
    int i,j,row,col;
    cout<<"Enter row no.: ";
    cin>>row;
    cout<<"Enter col no.: ";
    cin>>col;

    int a[row][col],b[row][col],sum[row][col];
    
    cout<<"Enter matrix 1: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cin>>a[i][j];
    }

    cout<<"Enter matrix 2: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        cin>>b[i][j];
    }
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    
    cout<<"Sum is: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}