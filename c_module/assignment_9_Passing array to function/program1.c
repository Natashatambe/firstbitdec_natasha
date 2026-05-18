#include<stdio.h>

// Function declaration
void findMinMax(int arr[], int size);

int main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call
    findMinMax(arr, 5);

    return 0;
}

// Function definition
void findMinMax(int arr[], int size)
{
    int i, min, max;

    min = arr[0];
    max = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Minimum number = %d\n", min);
    printf("Maximum number = %d\n", max);
}