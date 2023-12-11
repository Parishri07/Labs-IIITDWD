#include<stdio.h>
int main()
{
    int size,search,i;
     
    printf("Enter size of an array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements of the array: ");
    for(i=0;i<size;i++)
    {
      scanf("%d",arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d",&search); 

    for(i=0;i<size;i++)
    {
      if(arr[i]==search)
      {
        printf("Found the element");
        break;
      }
    }
    if(i==size)
    printf("Element is not found");
     return 0;
}