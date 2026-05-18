#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n, i, temp;

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

    // Reverse array
    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array is:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);

    return 0;
}