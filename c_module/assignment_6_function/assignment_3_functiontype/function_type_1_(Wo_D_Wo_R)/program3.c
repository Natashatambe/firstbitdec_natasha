<<<<<<< HEAD

#include<stdio.h>

=======
#include<stdio.h>

>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
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
<<<<<<< HEAD
>>>>>>> a6e0a47394198f786ebdc5e4b1e1d7f42da419ee
=======
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
