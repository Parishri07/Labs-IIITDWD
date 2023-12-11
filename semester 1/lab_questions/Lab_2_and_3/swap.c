#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no.s: ");
    scanf("%d %d",&a,&b);
   /* printf("%d %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b); */
    
    printf("%d %d\n",a,b);
    a=a+b;
    b=a-b; 
    a=a-b;
    printf("%d %d\n",a,b);

   return 0;
}

