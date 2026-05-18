#include<stdio.h>

// Function declaration
void addArray(int arr[], int brr[], int crr[], int size);

int main()
{
    int arr[5], brr[5], crr[5];
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
    addArray(arr, brr, crr, 5);

    printf("Third array after addition:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}

// Function definition
void addArray(int arr[], int brr[], int crr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        crr[i] = arr[i] + brr[i];
    }
}