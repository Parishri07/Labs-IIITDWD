#include<stdio.h>
void array(int n)
{
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    int *p=&a[0];
    int *q=&a[n-1];
    int largest=a[0],smallest=a[0];
    for(;p<q;p++)
    {
        if(*p>largest)
        largest=*p;
        else if(*p<smallest)
        smallest=*p;
        else
        continue;
    }
    printf("Largest and smallest elements are: %d %d",largest,smallest);
}
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    array(n);
    return 0;
}