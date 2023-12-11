#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("test.txt","r");
    int n;
    
    fscanf(fp,"%d",&n);
    printf("%d\n",n);
    fscanf(fp,"%d",&n);
    printf("%d\n",n);
    fscanf(fp,"%d",&n);
    printf("%d\n",n);
    fscanf(fp,"%d",&n);
    printf("%d\n",n);
    fscanf(fp,"%d",&n);
    printf("%d\n",n);
    
    /*for(int i=1;i<EOF;i++)
    {
      fscanf(fp,"%d",&n);
      printf("%d",n);
    }*/
    fclose(fp);
     return 0;
}