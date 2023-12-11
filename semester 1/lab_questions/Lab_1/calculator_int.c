#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first (greater) number: ");
    scanf("%d\n",&a);

    printf("Enter second number: ");
    scanf("%d\n",&b);

    printf("Sum is: %d\n",a+b);
    printf("Subtraction  is: %d\n",a-b);
    printf("Multiplication is: %d\n",a*b);
    printf("Division is: %d\n",a/b);

    return 0;
}