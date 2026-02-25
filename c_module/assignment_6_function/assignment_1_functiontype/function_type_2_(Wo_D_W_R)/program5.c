#include <stdio.h>

int age_eligible();   // function declaration

int main()
{
    int result;

    result = age_eligible();   // function call

    if (result == 1)
        printf("Person is eligible for vote");
    else
        printf("Person is not eligible for vote");

    return 0;
}

int age_eligible()    // no parameter, with return type
{
    int age = 45;

    if (age >= 18)
        return 1;   // eligible
    else
        return 0;   // not eligible
}