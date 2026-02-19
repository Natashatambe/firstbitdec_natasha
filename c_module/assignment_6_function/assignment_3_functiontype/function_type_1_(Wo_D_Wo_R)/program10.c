#include <stdio.h>
void sum();
void main()
{
	sum();
}

void sum() {
    int n = 12345;       
    int first, last;

    last = n % 10;      

    int temp = n;
    while (temp >= 10) { 
        temp = temp / 10;
    }
    first = temp;        

    int sum = first + last;
    printf("%d", sum);
}

