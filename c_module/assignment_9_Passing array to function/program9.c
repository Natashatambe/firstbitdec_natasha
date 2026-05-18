#include<stdio.h>

// Function declaration
void reverseArray(int arr[], int size);

int main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call#include<stdio.h>

// Function declaration
void reverseArray(int arr[], int size);

int main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call
    reverseArray(arr, 5);

    printf("Reversed array is:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Function definition
void reverseArray(int arr[], int size)
{
    int i, temp;

    for(i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
    reverseArray(arr, 5);

    printf("Reversed array is:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Function definition
void reverseArray(int arr[], int size)
{
    int i, temp;

    for(i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}