#include<stdio.h>

void main()
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

    // Copy first array into third array
    for(i = 0; i < 5; i++)
    {
        crr[i] = arr[i];
    }

    // Copy second array into third array
    for(i = 0; i < 5; i++)
    {
        crr[i + 5] = brr[i];
    }

    printf("Merged array is:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", crr[i]);
    }
}