#include <stdio.h>

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i = 0, sum = 0;

    while (i < 5)
    {
        sum = sum + arr[i];
        i++;
    }

    printf("Sum = %d", sum);
}
