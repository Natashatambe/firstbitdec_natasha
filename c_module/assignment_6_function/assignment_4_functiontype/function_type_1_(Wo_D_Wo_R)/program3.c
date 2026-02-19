#include <stdio.h>
void isperfect();
void main() 
{
	 isperfect();
}


void isperfect() {
    int n = 1000;  
    int num = 1;

    printf("Perfect numbers from 1 to %d are:\n", n);

    while (num <= n) {
        int i = 1;
        int sum = 0;

    
        while (i < num) {  // Nested loop
            if (num % i == 0) {
                sum = sum + i;
            }
            i++;
        }

        if (sum == num) {
            printf("%d ", num);
        }

        num++;
    }
}
