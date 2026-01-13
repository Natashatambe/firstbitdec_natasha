#include <stdio.h>

int main() {
    int num, rev, d1, d2, d3;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    d1 = num / 100;        // first digit
    d2 = (num / 10) % 10; // middle digit
    d3 = num % 10;        // last digit

    rev = d3 * 100 + d2 * 10 + d1;

    if (num == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}

