#include<stdio.h>
int main()
{
    int roll,class,marks;
    char n[10];
    printf("Enter name,roll no.,class and marks of the student: ");
    scanf("%s %d %d %d",n,&roll,&class,&marks);
    FILE *fp;
    fp=fopen("test.txt","w");
    fprintf(fp,"Name: %s\n",n);
    fprintf(fp,"Roll no.: %d\n",roll);
    fprintf(fp,"Class: %d\n",class);
    fprintf(fp,"Marks: %d\n",marks);
    fclose(fp);
    return 0;
}