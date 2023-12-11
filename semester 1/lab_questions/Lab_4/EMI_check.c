#include<stdio.h>
int main()
{
    int amt=1550000, rest_amt= amt-85000;

    int pay=(16*rest_amt)/100 * 60, EMI=pay/60;

    printf("EMI is: ",EMI);
     return 0;
}