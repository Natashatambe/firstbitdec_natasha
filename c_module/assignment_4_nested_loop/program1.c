#include <stdio.h>

void main() {
    int n = 500;  
    int num = 1;

    printf("Armstrong numbers from 1 to %d are:\n", n);

    while (num <= n) {
        int temp = num;
        int sum = 0;
        int digits = 0;

        // Count digits
        int t = temp;
        while (t > 0) {
            digits++;
            t = t / 10;
        }

        // Calculate sum of digits^digits
        t = temp;
        while (t > 0) {
            int digit = t % 10;
            int power = 1;
            int i = 1;

            while (i <= digits) {   
                power = power * digit;
                i++;
            }

            sum = sum + power;
            t = t / 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }

        num++;
    }
}
