
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
<<<<<<< HEAD

=======
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
