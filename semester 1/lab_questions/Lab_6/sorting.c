#include<stdio.h>
int main()
{
    int size,tmp;

    printf("Enter size of an array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements of the array: ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
          if(arr[i]<arr[j])
          {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
          }
        }
    }
    printf("The sorted array in descending order is: ");
    for(int i=0;i<size;i++)
    printf("%d",arr[i]);
    
    return 0;
}