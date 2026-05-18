#include<stdio.h>

// Function declaration
void printAlternate(int arr[], int size);

int main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call
    printAlternate(arr, 5);

    return 0;
}

// Function definition
void printAlternate(int arr[], int size)
{
    int i;

    printf("Alternate elements are:\n");

    for(i = 0; i < size; i = i + 2)
    {
        printf("%d ", arr[i]);
    }
}