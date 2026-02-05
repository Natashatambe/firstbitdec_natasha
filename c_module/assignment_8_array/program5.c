#include <stdio.h>

void main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int i = 0;

    while (i < 6)
    {
        printf("%d ", arr[i]);
        i = i + 2;   // jump to next alternate element
    }
}
