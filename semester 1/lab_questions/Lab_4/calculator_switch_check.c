#include<stdio.h>
int main()
{
    int a,b;
    char c;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Enter opertion: ");
    scanf("%c",&c);

    switch(c)
   {
    case '+':
    printf("%d",a+b);
    break;

    case '-':
    printf("%d",a-b);
    break;

    case '*':
    printf("%d",a*b);
    break;

    case '/':
    printf("%f", (float)a/b);
    break;

    case '%':
    printf("%d",a%b);
    break;

    default:
    printf("Invalid Input");
   }
    return 0;
}