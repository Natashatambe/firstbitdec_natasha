#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n, i, num, found = 0;

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

    printf("Enter number to search: ");
    scanf("%d", &num);

    // Searching element
    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            printf("Number found at position %d", i + 1);
            break;
        }
    }

    if(found == 0)
    {
        printf("Number not found");
    }

    // Free allocated memory
    free(arr);

    return 0;
}