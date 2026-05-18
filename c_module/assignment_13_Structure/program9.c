#include <stdio.h>

// Structure Declaration
struct Complex
{
    float real;
    float imaginary;
};

int main()
{
    // Structure Variable
    struct Complex c;

    // Taking Input
    printf("Enter complex number (real imaginary): ");
    scanf("%f %f", &c.real, &c.imaginary);

    // Displaying Data
    printf("\nComplex Number is: %.2f + %.2fi\n", c.real, c.imaginary);

    return 0;
}