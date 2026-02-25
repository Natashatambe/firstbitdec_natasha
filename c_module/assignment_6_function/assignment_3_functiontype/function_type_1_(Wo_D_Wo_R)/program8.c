<<<<<<< HEAD

=======
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
#include <stdio.h>
void isvaluestrong();
void main()
{
	isvaluestrong();
}
void isvaluestrong(){
    int n = 145;
    int temp, r, sum = 0;

    temp = n;

    while (n > 0)
    {
        r = n % 10;

      
        int fact = 1;
        int i = 1;
        while (i <= r)
        {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == temp)
        printf("Strong");
    else
        printf("Not Strong");
}
