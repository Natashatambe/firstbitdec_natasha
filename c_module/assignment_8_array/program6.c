#include<stdio.h>

void main()
{
    int arr[10], i, j, n, count;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers are:\n");

    for(i = 0; i < n; i++)
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