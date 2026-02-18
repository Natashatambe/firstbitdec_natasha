#include <stdio.h>
void isfactor();
void main()
{
     isfactor();
}
void isfactor(){
    int n = 5;
    int fact = 1;

    while (n > 0)
    {
        fact = fact * n;
        n--;
    }

    printf("%d", fact);
}
