#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
     printf("%d",a);
    else if(a>b && c>a)
     printf("%d",c);
    else if(b>a && b>c)
     printf("%d",b);
    else if(b>a && c>b)
     printf("%d",c);
    else
    printf("Two or three may be equal");
 
    return 0;
}