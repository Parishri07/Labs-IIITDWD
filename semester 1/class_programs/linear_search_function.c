#include<stdio.h>
void l_search(int a[], int search, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      if(a[i]==search)
      {
        printf("Found the element");
        break;
      }
    }
    if(i==n)
    printf("Element is not found");
}

int main()
{
    int size,search,i;
     
    printf("Enter size of an array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements of the array: ");
    for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d",&search); 

    l_search(arr,search,size);
    
    return 0;
}