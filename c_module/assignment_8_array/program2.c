#include <stdio.h>
void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i = 0, num, flag = 0;

    num = 30;   // number to search (hardcoded)

    while (i < 5)
    {
        if (arr[i] == num)
        {
            flag = 1;
        }
        i++;
    }

    if (flag == 1)
        printf("Number found");
    else
        printf("Number not found");
}
