#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    // Dynamic memory allocation using malloc
    arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers are:\n");

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers are:\n");

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    // Free allocated memory
    free(arr);

    return 0;
}