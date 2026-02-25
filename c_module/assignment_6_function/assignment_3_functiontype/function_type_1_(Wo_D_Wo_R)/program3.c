
#include<stdio.h>

void sum();

int main()
{
    sum();   // function call
    return 0;
}

void sum()
{
    int start=1, end=5, sum=0;
    while(start <= end)
    {
        sum = sum + start;
        start++;
    }
    printf("%d", sum);
}
>>>>>>> a6e0a47394198f786ebdc5e4b1e1d7f42da419ee
