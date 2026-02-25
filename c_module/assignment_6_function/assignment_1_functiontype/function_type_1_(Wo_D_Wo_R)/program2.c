#include <stdio.h>

void checkPalindrome();   

void main()
{
    checkPalindrome();   
}

void checkPalindrome()    
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
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
