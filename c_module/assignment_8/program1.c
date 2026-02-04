#include <stdio.h>
void main()
{
    int arr[5] = {37,34,76,45,12};
    int i = 1;
    int min, max;

    min = arr[0];
    max = arr[0];

    while (i < 5)
    {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];

        i++;
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);
}
