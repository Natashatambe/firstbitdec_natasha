
#include<stdio.h>

void checkLeap();  

void main()
{
    checkLeap();    
}

void checkLeap()    
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

