#include <stdio.h>

void main() {
    int n = 4;  // You can change the size of the square
    int i, j;

    for (i = 1; i <= n; i++) {        // Outer loop for rows
        for (j = 1; j <= n; j++) {    // Inner loop for columns
            printf("* ");
        }
        printf("\n");                  // Move to next row
    }
}
