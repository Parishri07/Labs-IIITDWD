#include<stdio.h>

int main()
{
  struct DayData
  {
    int temp,rain;
    //int rain;
  };
  int n,sum_t=0,sum_r=0;
  printf("Enter number of days: ");
  scanf("%d",&n);
  struct DayData dd[n];
  printf("Enter temperature and rainfall for each day \n");
  for(int i=0;i<n;i++)
  {
    scanf("%d %d",&dd[i].temp,&dd[i].rain);
    sum_t+=dd[i].temp;
    sum_r+=dd[i].rain;
  }
  printf("Average temperature: %d\n",(sum_t/n));
  printf("Average rainfall: %d",(sum_r/n));
}