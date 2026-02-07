#include <stdio.h>

void checkPalindrome();   // function declaration

void main()
{
    checkPalindrome();   // function call
}

void checkPalindrome()    // function definition
{
    int num, temp, rev = 0, rem;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    temp = num;   // store original number

    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (num == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
