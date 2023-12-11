#include<stdio.h>
int main()
{
    struct s
    {
        char n[10];
        int marks;
        float cgpa;
        char course[5];
    };
    struct s k[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter name,marks,cgpa and course of student %d: ",i+1);
        scanf("%s %i %f %s",k[i].n,&k[i].marks,&k[i].cgpa,k[i].course);
    }
    FILE *fp;
    fp=fopen("test.txt","w");
    fprintf(fp,"%s","Name   Marks   CGPA    Course\n");
    for(int i=0;i<5;i++)
    {
      fprintf(fp,"%s     %d     %f     %s\n",k[i].n,k[i].marks,k[i].cgpa,k[i].course);
    }
    fclose(fp);
    return 0;
}