#include<stdio.h>

void Swap(int *p,int *q)
{
    int tmp=*p;
    *p=*q;
    *q=tmp;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The values of a and b before swapping: %d %d\n",a,b);
    Swap(&a,&b);
    printf("The values of a and b after swapping: %d %d",a,b);
    return 0;
}