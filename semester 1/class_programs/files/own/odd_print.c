#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    FILE *fp;
    fp=fopen("test.txt","w");
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        fprintf(fp,"%d\n",i);
    }
    fclose(fp);
    return 0;
}