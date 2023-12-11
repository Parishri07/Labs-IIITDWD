#include<stdio.h>
int main()
{
    int n;
    int arr[n];
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int maxno=arr[0],minno=arr[0];

    for(int i=0;i<n;i++)
    {
    if(arr[i]>maxno)
    maxno=arr[i];

    if(arr[i]<minno)
    minno=arr[i];
    }

    printf("%d %d",maxno,minno);
     return 0;
}