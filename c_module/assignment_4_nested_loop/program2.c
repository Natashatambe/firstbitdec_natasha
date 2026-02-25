#include <stdio.h>

void main() {
    int n = 50;  
    int num = 2; 
<<<<<<< HEAD
=======

>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
    printf("Prime numbers from 1 to %d are:\n", n);

    while (num <= n) {
        int i = 2;
        int isPrime = 1; 

        // Check if num is divisible by any number from 2 to num-1
        while (i < num) {  
            if (num % i == 0) {
                isPrime = 0; 
            }
            i++;
        }

        if (isPrime == 1) {
            printf("%d ", num);
        }

        num++;
    }
}
