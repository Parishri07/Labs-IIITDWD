#include<stdio.h>
int main()
{
    int a,b,rem,prod;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    prod=a*b; 
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    printf("GCD is: %d\n",a); 
    printf("LCM is: %d\n",prod/a);
    return 0;
}