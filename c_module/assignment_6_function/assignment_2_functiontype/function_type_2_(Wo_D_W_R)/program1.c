#include <stdio.h>

int checkAge(void);   

int main()
{
    int category = checkAge();   

    if(category == 1)
        printf("Child");
    else if(category == 2)
        printf("Teenager");
    else if(category == 3)
        printf("Adult");
    else
        printf("Senior");

    return 0;
}

int checkAge(void)   
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 12)
        return 1;
    else if (age <= 19)
        return 2;
    else if (age <= 59)
        return 3;
    else
        return 4;
}