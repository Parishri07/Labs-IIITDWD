#include<stdio.h>
int factorial(int n)
{
    if(n>0)
    return n*factorial(n-1);
    else
    return 1;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int fact=factorial(num);
    printf("Factorial of the number is: %d",fact);
     return 0;
}