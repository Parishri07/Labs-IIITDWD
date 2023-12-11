#include<stdio.h>
int main()
{
    float temp_in_celcius, F;

    printf("Temperature in celcius: ");
    scanf("%d",&temp_in_celcius);

    F= (temp_in_celcius*9/5)+32;
    printf("Temperature in Fahrenheit is %d",F);
    
    return 0;
}