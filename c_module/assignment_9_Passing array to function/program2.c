#include<stdio.h>

// Function declaration
void displayArray(int arr[], int size);

int main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Passing array to function
    displayArray(arr, 5);

    return 0;
}

// Function definition
void displayArray(int arr[], int size)
{
    int i;

    printf("Array elements are:\n");

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}