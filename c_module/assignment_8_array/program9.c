#include<stdio.h>

void main()
{
    int arr[5], i, temp;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reverse array
    for(i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    printf("Reversed array is:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

 
}