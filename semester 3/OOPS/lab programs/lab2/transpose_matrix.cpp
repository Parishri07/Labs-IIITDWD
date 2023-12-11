#include <iostream>
using namespace std;

int main()
{
    int i,j,row,col;
    cout<<"Enter row no.: ";
    cin>>row;
    cout<<"Enter col no.: ";
    cin>>col;

    int a[row][col],tp[col][row];
    
    cout<<"Enter matrix : "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
        cin>>a[i][j];
         tp[j][i]=a[i][j];    
        }
    }
    
    
    cout<<"Transpose is: "<<endl;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<tp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}