<<<<<<< HEAD
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

=======
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

>>>>>>> a6e0a47394198f786ebdc5e4b1e1d7f42da419ee
