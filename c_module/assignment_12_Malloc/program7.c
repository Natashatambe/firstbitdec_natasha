#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr, *brr, *crr;
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    // Dynamic memory allocation using malloc
    arr = (int*)malloc(n * sizeof(int));
    brr = (int*)malloc(n * sizeof(int));
    crr = (int*)malloc(n * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter elements for first array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter elements for second array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &brr[i]);
    }

    // Adding arrays
    for(i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("Third array after addition:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", crr[i]);
    }

    // Free allocated memory
    free(arr);
    free(brr);
    free(crr);

    return 0;
}