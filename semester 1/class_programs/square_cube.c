#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    
    printf("Square of the number: %d",number*number);
    printf("Cube of the number: %d",number*number*number);

    return 0;
}