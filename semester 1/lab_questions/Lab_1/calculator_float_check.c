#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first (greater) number: ");
    scanf("%f\n",&a);

    printf("Enter second number: ");
    scanf("%f\n",&b);

    printf("Sum is: %f\n",a+b);
    printf("Subtraction  is: %f\n",a-b);
    printf("Multiplication is: %f\n",a*b);
    printf("Division is: %f\n",a/b);

    return 0;
}