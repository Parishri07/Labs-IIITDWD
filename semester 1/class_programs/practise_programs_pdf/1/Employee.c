#include<stdio.h>

int main()
{
    struct Employee
    {
        char name[10];
        int eid;
        char dep[10];
        int salary;
    };

    int n;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    struct Employee e[n];

    printf("Enter the name, employee id, department and salary of the employee: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %s %d",&e[i].name,&e[i].eid,&e[i].dep,&e[i].salary);
    }
    printf("Number   Name   Employee ID   Department  Salary");
    for(int i=0;i<n;i++)
    {
        printf("\n");
        printf("%d     %s       %d       %s       %d",(i+1),e[i].name,e[i].eid,e[i].dep,e[i].salary);
    }

}