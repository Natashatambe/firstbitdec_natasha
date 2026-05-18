#include<stdio.h>

// Function declaration
void mergeArray(int arr[], int brr[], int crr[], int size1, int size2);

int main()
{
    int arr[5], brr[5], crr[10];
    int i;

    printf("Enter 5 elements for first array:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter 5 elements for second array:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &brr[i]);
    }

    // Function call
    mergeArray(arr, brr, crr, 5, 5);

    printf("Merged array is:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}

// Function definition
void mergeArray(int arr[], int brr[], int crr[], int size1, int size2)
{
    int i;

    // Copy first array
    for(i = 0; i < size1; i++)
    {
        crr[i] = arr[i];
    }

    // Copy second array
    for(i = 0; i < size2; i++)
    {
        crr[size1 + i] = brr[i];
    }
}