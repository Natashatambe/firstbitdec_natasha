#include<stdio.h>
// Function declaration
int findSum(int arr[], int size);

int main()
{
    int arr[5], i, sum;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call
    sum = findSum(arr, 5);

    printf("Sum of all elements = %d", sum);

    return 0;
}

// Function definition
int findSum(int arr[], int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

