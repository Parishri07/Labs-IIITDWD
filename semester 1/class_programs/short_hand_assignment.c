#include<stdio.h>
int main()
{
    int n,sum=0,sub=4,mul=2,mod=10;
    float div=10;

    printf("Enter a number: ");
    scanf("%d",&n);

    sum += n;
    sub -= n;
    mul *= n;
    div /= n;
    mod %= n;

    printf("%d %d %d %f %d",sum,sub,mul,div,mod);
     return 0;
}