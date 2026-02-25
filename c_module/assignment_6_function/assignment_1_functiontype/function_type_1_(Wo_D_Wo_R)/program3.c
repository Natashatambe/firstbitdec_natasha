
#include<stdio.h>

void checkLeap();   // function declaration

void main()
{
    checkLeap();    // function call
}

void checkLeap()    // function definition
{
    int year = 2059;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not Leap year");
    }
}
