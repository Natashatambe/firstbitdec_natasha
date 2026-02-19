<<<<<<< HEAD
#include <stdio.h>
void isperfect();
void main()
{
	 isperfect();
}
void isperfect(){
    int n = 28;
    int i = 1;
    int sum = 0;

    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if (sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");
}
=======
#include <stdio.h>
void isperfect();
void main()
{
	 isperfect();
}
void isperfect(){
    int n = 28;
    int i = 1;
    int sum = 0;

    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if (sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");
}
>>>>>>> a6e0a47394198f786ebdc5e4b1e1d7f42da419ee
// This program checks if a hardcoded number is a perfect number or not