#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr, *brr, *crr;
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Dynamic memory allocation using malloc
    arr = (int*)malloc(n1 * sizeof(int));
    brr = (int*)malloc(n2 * sizeof(int));
    crr = (int*)malloc((n1 + n2) * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter elements for first array:\n");

    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter elements for second array:\n");

    for(i = 0; i < n2; i++)
    {
        scanf("%d", &brr[i]);
    }

    // Copy first array into third array
    for(i = 0; i < n1; i++)
    {
        crr[i] = arr[i];
    }

    // Copy second array into third array
    for(i = 0; i < n2; i++)
    {
        crr[n1 + i] = brr[i];
    }

    printf("Merged array is:\n");

    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", crr[i]);
    }

    // Free allocated memory
    free(arr);
    free(brr);
    free(crr);

    return 0;
}