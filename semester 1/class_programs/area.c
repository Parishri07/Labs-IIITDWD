#include<stdio.h>
#define PI 3.141
int main()
{
    float area,radius;

    printf("The value of PI is %f \n",PI);
    printf("Enter the radius: ");
    scanf("%f",&radius);

    area= PI*radius*radius;
    printf("%.2f",area);
     return 0;
}