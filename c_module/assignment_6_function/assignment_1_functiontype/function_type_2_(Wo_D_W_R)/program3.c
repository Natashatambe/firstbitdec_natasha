#include <stdio.h>

int checkLeap();   // function declaration

int main()
{
    int result;

    result = checkLeap();   // function call

    if (result == 1)
        printf("Leap year");
    else
        printf("Not Leap year");

    return 0;
}

int checkLeap()    // function definition
{
    int year = 2059;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}