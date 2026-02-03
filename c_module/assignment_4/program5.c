#include <stdio.h>

void main() {
    int choice, num, temp, sum, digit, rev, i, isPrime;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Check even or odd\n");
        printf("2. Check prime or not\n");
        printf("3. Check palindrome\n");
        printf("4. Check positive, negative or zero\n");
        printf("5. Reverse a number\n");
        printf("6. Sum of digits\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting program...\n");
            break;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        switch (choice) {

            case 1:
                if (num % 2 == 0)
                    printf("%d is even.\n", num);
                else
                    printf("%d is odd.\n", num);
                break;

            case 2:
                if (num < 2)
                    printf("%d is not prime.\n", num);
                else {
                    isPrime = 1;
                    i = 2;
                    while (i <= num / 2) { // check divisibility
                        if (num % i == 0) {
                            isPrime = 0;
                        }
                        i++;
                    }
                    if (isPrime)
                        printf("%d is prime.\n", num);
                    else
                        printf("%d is not prime.\n", num);
                }
                break;

            case 3:
                temp = num;
                rev = 0;
                while (temp > 0) {
                    digit = temp % 10;
                    rev = rev * 10 + digit;
                    temp = temp / 10;
                }
                if (rev == num)
                    printf("%d is a palindrome.\n", num);
                else
                    printf("%d is not a palindrome.\n", num);
                break;

            case 4:
                if (num > 0)
                    printf("%d is positive.\n", num);
                else if (num < 0)
                    printf("%d is negative.\n", num);
                else
                    printf("Number is zero.\n");
                break;

            case 5:
                temp = num;
                rev = 0;
                while (temp > 0) {
                    digit = temp % 10;
                    rev = rev * 10 + digit;
                    temp = temp / 10;
                }
                printf("Reverse of %d is %d\n", num, rev);
                break;

            case 6:
                temp = num;
                sum = 0;
                while (temp > 0) {
                    digit = temp % 10;
                    sum = sum + digit;
                    temp = temp / 10;
                }
                printf("Sum of digits of %d is %d\n", num, sum);
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
