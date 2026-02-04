#include <stdio.h>

void main() {
    int n = 121;         
    int original = n;    
    int reversed = 0;    
    int remainder;

    while (n > 0) {
        remainder = n % 10;            
        reversed = reversed * 10 + remainder;  
        n = n / 10;                    
    }

    if (reversed == original)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

   
