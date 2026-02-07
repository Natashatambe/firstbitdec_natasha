#include<stdio.h>
 void checkEvenOdd();   // function declaration

void main()
{
    checkEvenOdd();  // function call
}
 void checkEvenOdd()   // function definition
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}
