#include<stdio.h>

void dsort(int n, int a[n])
{
    int tmp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(a[i]<a[j])
          {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
          }
        }
    }
    
    printf("The sorted array in descending order is: ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}

void asort(int n, int a[n])
{
    int tmp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(a[i]>a[j])
          {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
          }
        }
    }
    
    printf("The sorted array in ascending order is: ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}

int main()
{
    int size,c;

    printf("Enter size of an array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements of the array: ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
  
    printf("Enter 1: Ascending order or 2: Descending order\n");
    scanf("%d",&c);
    
    switch(c)
    {
      case 1:
      asort(size,arr);
      break;
    
      case 2:
      dsort(size,arr);
      break;
    }
    return 0;
}