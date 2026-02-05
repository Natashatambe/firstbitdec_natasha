#include <stdio.h>

void main()
{
    int arr[5] = {10, 15, 22, 37, 40};
    int i = 0;

    while (i < 5)
    {
        if (arr[i] % 2 == 0)
            printf("%d is Even\n", arr[i]);
        else
            printf("%d is Odd\n", arr[i]);

        i++;
    }
}
