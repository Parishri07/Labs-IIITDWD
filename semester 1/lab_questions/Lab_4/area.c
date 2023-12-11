#include<stdio.h>
int main()
{
    char ch;
    printf("Enter figure: ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'c':
        {
            int r;
            printf("Enter radius: ");
            scanf("%d",&r);

            printf("Area is: %f",3.14*r*r);
            break;
        }

        case 's':
        {
            int s;
            printf("Enter side: ");
            scanf("%d",&s);

            printf("Area is: %d",s*s);
            break;
        }

        case 'r':
        {
            int l,b;
            printf("Enter lenght and breadth: ");
            scanf("%d %d",&l,&b);

            printf("Area is: %d",l*b);
            break;
        }

        case 't':
        {
            int b,h;
            printf("Enter breadth and height: ");
            scanf("%d %d",&b,&h);

            printf("Area is: %f",0.5*b*h);
            break;
        }

        default:
        printf("Invalid Output");   

    }
    return 0;
}