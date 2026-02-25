#include <stdio.h>

void main() {
    int n = 5;  
    int i, j;

    for (i = 1; i <= n; i++) {       
        for (j = 1; j <= i; j++) {   
            printf("*");
        }
        printf("\n");                 
    }
}
// This program prints a right-angled triangle of asterisks
// with the number of rows defined by the variable 'n'.
