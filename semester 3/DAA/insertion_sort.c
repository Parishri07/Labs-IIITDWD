#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Include the time.h header for clock_gettime
#include <math.h>

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n, i;
     clock_t start, end;
    double total;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        // arr[i] = rand() % 10;
        arr[i] = rand() % 1000;
    }

    printf("Array before sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    start = clock();
    insertionSort(arr, n);
    end = clock();

    printf("\nArray after sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    total = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nTime taken is: %f seconds\n", total);

    return 0;
}
