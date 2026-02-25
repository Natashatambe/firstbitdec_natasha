#include <stdio.h>

int checkPalindrome();   // function declaration

int main()
{
    int result;

    result = checkPalindrome();   // function call

    if (result == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

int checkPalindrome()    // function definition
{
    int num, temp, rev = 0, rem;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (num == rev)
        return 1;   // palindrome
    else
        return 0;   // not palindrome
}