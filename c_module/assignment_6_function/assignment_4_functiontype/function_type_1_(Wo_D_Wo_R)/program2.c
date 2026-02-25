#include <stdio.h>
void isprime();
void main()
{
 isprime();
}

 void isprime(){
    int n = 50;  
    int num = 2; 

    printf("Prime numbers from 1 to %d are:\n", n);

    while (num <= n) {
        int i = 2;
        int isPrime = 1; 

       
        while (i < num) {  // Nested loop
            if (num % i == 0) {
                isPrime = 0; // Not prime
            }
            i++;
        }

        if (isPrime == 1) {
            printf("%d ", num);
        }

        num++;
    }
}
