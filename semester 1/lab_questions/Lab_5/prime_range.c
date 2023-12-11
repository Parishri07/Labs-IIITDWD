#include<stdio.h>
int main()
{
    int a,b,j;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    printf("Prime numbers: \n");
    for(int i=a;i<=b;i++)
    {
        if(i==1)
        printf("Neither prime nor composite");

        for(j=2;j<i;j++)
        {
          if(i%j==0)
          break;
        }
       if(j==i)
       printf("%d\n",i);
    }
    
    printf("Composite numbers: \n");
    for(int i=a;i<=b;i++)
    {
        if(i==1)
        printf("Niether prime nor composite");

        for(j=2;j<i;j++)
        {
          if(i%j==0)
          break;
        }
       if(j!=i)
       printf("%d\n",i);
    }
     return 0;
}