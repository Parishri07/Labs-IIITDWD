#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b(from 1 to 5): ");
    scanf("%d %d",&a,&b);

    if(a==2 && b==3)
    printf("Guessed");
    else if(a==2 || b==3)
    printf("Partly guessed or completely guessed");
    else
    printf("Incorrect guess");
     return 0;
}