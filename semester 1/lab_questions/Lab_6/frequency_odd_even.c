#include<stdio.h>
int main()
{
    int even,odd,n;

    printf("enter size: ");
    scanf("%d",&n);
  
   int arr[n];
   printf("Enter the values of array: ");
   for(int i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
      if(arr[i]%2==0)
      even++;
      else
      odd++;
   }
    printf("The frequency of odd and even numbers respectively is %d %d",odd,even);
    return 0;
}