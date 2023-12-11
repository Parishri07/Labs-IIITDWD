#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter row no.: ");
    scanf("%d",&row);
    printf("Enter col no.: ");
    scanf("%d",&col);

    int a[row][col],b[row][col],sum[row][col],sub[row][col];
    
    printf("Enter matrix 1: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        scanf("%d",&a[i][j]);
    }

    printf("Enter matrix 2: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        scanf("%d",&b[i][j]);
    }
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    
    printf("Sum is: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Sub is: \n");
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    printf("\n");

     return 0;
}