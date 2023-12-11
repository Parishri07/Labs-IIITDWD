#include<stdio.h>

int main()
{
    typedef struct 
    {
       int l,w;
    }
    Rectangle;
    Rectangle r;
    printf("Enter length and width: ");
    scanf("%d %d",&r.l,&r.w);
    
    printf("Area: %d\n",r.l*r.w);
    printf("Perimeter: %d\n",2*(r.l+r.w));
}