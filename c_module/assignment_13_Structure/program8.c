#include <stdio.h>

// Structure Declaration
struct Distance
{
    int feet;
    float inch;
};

int main()
{
    // Structure Variable
    struct Distance d;

    // Taking Input
    printf("Enter distance (feet inch): ");
    scanf("%d %f", &d.feet, &d.inch);

    // Displaying Data
    printf("\nDistance is: %d feet %.2f inches\n", d.feet, d.inch);

    return 0;
}