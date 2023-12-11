#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Sum: %d\n",a+b);
    printf("Sub: %d\n",a-b);
    printf("Mul: %d\n",a*b);
    printf("Div: %d\n",a/b);
    printf("Mod: %d\n",a%b);
     return 0;
}