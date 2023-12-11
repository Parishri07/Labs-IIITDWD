#include<stdio.h>
int main()
{
     int n;
    int arr[n],rev[n];
    
    printf("Enter the size of array: \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<n;i++)
    {
     rev[i]=arr[n-1-i];
    }

    for(int i=0;i<n;i++)
    printf("%d\t",rev[i]);
     return 0;
}