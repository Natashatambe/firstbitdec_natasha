#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n, i, sum = 0;

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

    // Finding sum
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of all elements = %d", sum);

    // Free allocated memory
    free(arr);

    return 0;
}