#include<stdio.h>
int main()
{
    int e_id,b_salary,DA,HRA;
    float g_salary;

    printf("Enter employee ID, basic slalry, %%DA, %%HRA ");
    scanf("%d %d %d %d",&e_id, &b_salary, &DA, &HRA);

    g_salary = b_salary+(DA*b_salary)/100+(HRA*b_salary)/100;

    printf("%d",g_salary);
    return 0;
}