#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n, i, j, count;

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

    printf("Prime numbers are:\n");

    for(i = 0; i < n; i++)
    {
        count = 0;

        if(arr[i] <= 1)
        {
            continue;
        }

        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", arr[i]);
        }
    }

    // Free allocated memory
    free(arr);

    return 0;
}