#include <stdio.h>
void isperfect();
void main() 
{
	 isperfect();
}


void isperfect() {
    int n = 1000;  // You can change this value
    int num = 1;

    printf("Perfect numbers from 1 to %d are:\n", n);

    while (num <= n) {
        int i = 1;
        int sum = 0;

        // Find all divisors of num
        while (i < num) {  // Nested loop
            if (num % i == 0) {
                sum = sum + i;
            }
            i++;
        }

        // Check if sum of divisors equals the number
        if (sum == num) {
            printf("%d ", num);
        }

        num++;
    }
}
