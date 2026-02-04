#include <stdio.h>

void main() {
    int n = 5;  // You can change the size of the triangle
    int i, j;

    for (i = 1; i <= n; i++) {       // Outer loop for rows
        for (j = 1; j <= i; j++) {   // Inner loop for columns
            printf("*");
        }
        printf("\n");                 // Move to next row
    }
}
// This program prints a right-angled triangle of asterisks
// with the number of rows defined by the variable 'n'.
