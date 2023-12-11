#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    { 
        
     for(int j=1;j<i;j++)
      printf(" ");
    
      char ch='A';
     for(int j=n-i+1;j>=1;j--)
     {
       printf("%c ",ch);
       ch=ch+1;
     }
     printf("\n");
    }
     return 0;
}