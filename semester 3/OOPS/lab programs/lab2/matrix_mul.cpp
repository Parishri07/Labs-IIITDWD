#include <iostream>
using namespace std;

int main()
{
    int i,j,row,col,tmp,sum;
    cout<<"Enter row no. of matrix 1: ";
    cin>>row;
    printf("Enter col no. of matrix 1(row no. of matrix 2): ");
    cin>>tmp;
    cout<<"Enter col no.: ";
    cin>>col;

    int a[row][tmp],b[tmp][col],mul[row][col];
    
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
            sum=0;
            for(int k=0;k<tmp;k++)
            {
            sum+=a[i][k]*b[k][j];
            }
            mul[i][j]=sum;
        }
    }
    
    cout<<"Multiplication is: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}