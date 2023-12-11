#include<stdio.h>
int main()
{
    int p_amt,R,T,n;

    printf("Enter P,R,T,n");
    scanf("%d %d %d %d",&p_amt,&R,&T,&n);

    float SI,CI;

    SI= (p_amt*R*T)/100;
    CI= p_amt*pow((1+R/n),n*T);

    printf("%f %f",SI,CI);
     return 0;
}