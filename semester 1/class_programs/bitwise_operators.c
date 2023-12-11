#include<stdio.h>
int main()
{
    int a,b,b_and,b_or;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    b_and= a & b;
    printf("%d\n",b_and);
    
    b_or= a|b;
    printf("%d",b_or);
    return 0;
}