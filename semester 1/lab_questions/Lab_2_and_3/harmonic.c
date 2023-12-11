#include<stdio.h>
int main()
{
    float sum=0;
    int n;

    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+= (float) 1/i;
    }

    printf("%f",sum);
     return 0;
}