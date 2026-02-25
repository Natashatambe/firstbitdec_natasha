<<<<<<< HEAD

=======
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
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
<<<<<<< HEAD
// This program checks if a hardcoded number is a perfect number or not
=======
// This program checks if a hardcoded number is a perfect number or not
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
