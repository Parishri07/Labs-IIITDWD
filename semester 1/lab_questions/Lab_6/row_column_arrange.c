#include<stdio.h>
int main()
{
    int row,col,tmp;
    printf("Enter row and column of the array: ");
    scanf("%d %d",&row,&col);

    int a[row][col];
    printf("Enter the elements of the array");
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
      scanf("%d",&a[i][j]);
    }
    //column elements in ascending order
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            for(int k=j+1;k<col;k++)
            {
                if(a[i][j]>a[i][k])
                {
                    tmp=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=tmp;
                }
            }
        }
    }
    
    //row elements in descending order
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            for(int k=j+1;k<row;k++)
            {
                if(a[j][i]<a[k][i])
                {
                    tmp=a[j][i];
                    a[j][i]=a[k][i];
                    a[k][i]=tmp;
                }
            }
        }
    }
   
   printf("Resultant matrix after arranging rows in ascending and columns in desending order: \n");
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
      printf("%d",a[i][j]);
    }    

    return 0;
}