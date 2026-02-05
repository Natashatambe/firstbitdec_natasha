
#include <stdio.h>

void main()
{
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++)
    {
        // print spaces
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        // print stars
        for (j = i; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}