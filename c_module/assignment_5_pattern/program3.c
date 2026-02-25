#include <stdio.h>

void main() {
    int n = 5;  
    int i, j;

    for (i = n; i >= 1; i--) {      
        for (j = 1; j <= i; j++) { 
            printf("*");
        }
        printf("\n");                
    }
}
// This program prints an inverted right-angled triangle of asterisks
// with the number of rows defined by the variable 'n'.
