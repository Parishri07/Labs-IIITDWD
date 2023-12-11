#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);

    (x>y)?printf("x is larger"):printf("y is larger");
     return 0;
}