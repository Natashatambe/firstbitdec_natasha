#include <stdio.h>

void main() {
    int n = 500;  // You can change this value
    int num = 1;

    printf("Strong numbers from 1 to %d are:\n", n);

    while (num <= n) {
        int temp = num;
        int sum = 0;

        // Process each digit
        while (temp > 0) {
            int digit = temp % 10;

            // Calculate factorial of digit using nested loop
            int fact = 1;
            int i = 1;
            while (i <= digit) {
                fact = fact * i;
                i++;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        // Check if sum of factorials equals the number
        if (sum == num) {
            printf("%d ", num);
        }

        num++;
    }
}
