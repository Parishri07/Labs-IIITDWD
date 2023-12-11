#include<stdio.h>
int main()
{
    int n,tmp;
    printf("enter size: ");
    scanf("%d",&n);
  
   int arr[n];
   printf("Enter the values of array: ");
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);

   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }
   }

   printf("The second largest and smallest elements: ");
   printf("%d %d", arr[1],arr[n-2]);
   
     return 0;
}