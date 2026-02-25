#include<stdio.h>
 void checkEvenOdd();   

void main()
{
    checkEvenOdd();  
}
 void checkEvenOdd()   
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}
