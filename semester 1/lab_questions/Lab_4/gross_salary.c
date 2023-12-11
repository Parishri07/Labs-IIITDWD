#include<stdio.h>
int main()
{
    int b_salary,HRA,DA,gross_salary;

    printf("Enter basic salary: \n");
    scanf("%d",&b_salary);

    if(b_salary<=10000)
    {
        HRA=(20*b_salary)/100;
        DA=(80*b_salary)/100;
    }
    else if(10001<=b_salary && b_salary<=20000)
    {
        HRA=(25*b_salary)/100;
        DA=(90*b_salary)/100;
    }

    else if(b_salary>=20001)
    {
        HRA=(30*b_salary)/100;
        DA=(95*b_salary)/100;
    }
    else
    printf("Invalid input");

    gross_salary= b_salary+DA+HRA;
    printf("Gross salary is: %d",gross_salary); 
     return 0;
}