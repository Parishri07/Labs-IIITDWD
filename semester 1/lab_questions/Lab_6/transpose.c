#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter row and column:");
    scanf("%d %d",&row,&col);

    int a[row][col],b[col][row];
    printf("Enter elements of array: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
          scanf("%d",&a[i][j]);
          b[j][i]=a[i][j];
        }
    }

    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        printf("%d",b[i][j]);
        printf("\n");
    }
    return 0;
}