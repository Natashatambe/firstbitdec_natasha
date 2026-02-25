#include <stdio.h>

int checkEvenOdd();   

int main()
{
    int result;

    result = checkEvenOdd();  

    if (result == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");

    return 0;
}

int checkEvenOdd()   
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    return num % 2;   
}