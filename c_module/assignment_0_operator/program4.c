#include <stdio.h>

int main() 
{
    int a, b, temp;
    a = 10;
    b = 20;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
