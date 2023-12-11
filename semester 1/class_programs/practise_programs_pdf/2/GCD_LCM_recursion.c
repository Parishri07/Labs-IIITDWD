#include<stdio.h>

int fun(int a,int b)
{
  int rem=a%b;
  if(rem!=0)
  {
    fun(b,rem);
  }
  else
  return b;
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int p=a*b;
    int GCD=fun(a,b);
    printf("GCD: %d\n",GCD);
    printf("LCM: %d",p/GCD);
    return 0;
}