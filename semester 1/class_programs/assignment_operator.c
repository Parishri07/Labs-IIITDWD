#include<stdio.h>
int main()
{
    int a=12,b;

    b=a;
    printf("%d\n",b);

    b+=a;
    b-=a;
    b*=a;
    b/=a;
    printf("%d",b);

     return 0;
}