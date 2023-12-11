#include<stdio.h>
int main()
{
     int row,tmp,col,sum;
    printf("Enter row no. of matrix 1: ");
    scanf("%d",&row);
    printf("Enter col no. of matrix 1(row no. of matrix 2): ");
    scanf("%d",&tmp);
    printf("Enter col no. of matrix 2: ");
    scanf("%d",&col);

    int a[row][tmp],b[tmp][col],mul[row][col];
    
    printf("Enter matrix 1: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<tmp;j++)
        scanf("%d",&a[i][j]);
    }

    printf("Enter matrix 2: \n");
    for(int i=0;i<tmp;i++)
    {
        for(int j=0;j<col;j++)
        scanf("%d",&b[i][j]);
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

    for(int i=0;i<row;i++)
    {
        int j;
        for(j=0;j<col;j++)
        {
        printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
     return 0;
}