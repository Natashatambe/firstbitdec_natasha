#include<stdio.h>

// Function declaration
void printPrime(int arr[], int size);

int main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function call
    printPrime(arr, 5);

    return 0;
}

// Function definition
void printPrime(int arr[], int size)
{
    int i, j, count;

    printf("Prime numbers are:\n");

    for(i = 0; i < size; i++)
    {
        count = 0;

        if(arr[i] <= 1)
        {
            continue;
        }

        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", arr[i]);
        }
    }
}