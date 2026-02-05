#include <stdio.h>

void main() {
    int num1, num2;
    char op;
    
    printf("Enter two number:- ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operator (+, -, *, /, %%):- ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("Result = %d", num1 + num2);
    }
    else {
        if (op == '-') {
            printf("Result = %d", num1 - num2);
        }
        else {
            if (op == '*') {
                printf("Result = %d", num1 * num2);
            }
            else {
                if (op == '/') {
                    if (num2 != 0)
                        printf("Result = %d", num1 / num2);
                    else
                        printf("Division by zero not allowed");
                }
                else {
                    if (op == '%') {
                        if (num2 != 0)
                            printf("Result = %d", num1 % num2);
                        else
                            printf("Modulo by zero not allowed");
                    }
                    else {
                        printf("Invalid operator");
                    }
                }
            }
        }
    }
}
// This program performs basic arithmetic operations
// based on user input for two numbers and an operator.