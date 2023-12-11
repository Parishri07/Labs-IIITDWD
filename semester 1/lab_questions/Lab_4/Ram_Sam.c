#include<stdio.h>
int main()
{
    int X,Y,temp;
    printf("Enter marks of Ram and Sam: ");
    scanf("%d %d",&X,&Y);

    printf("%d %d\n",X,Y);
    temp=X;
    X=Y;
    Y=temp;
    printf("%d %d",X,Y);
     return 0;
}