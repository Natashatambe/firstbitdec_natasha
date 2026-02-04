
#include <stdio.h>

void main() {
    int n = 121;          // hardcoded input
    int original = n;     // store original number
    int reversed = 0;     // to store reversed number
    int remainder;

    while (n > 0) {
        remainder = n % 10;            // get last digit
        reversed = reversed * 10 + remainder;  // build reversed number
        n = n / 10;                    // remove last digit
    }

    if (reversed == original)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}