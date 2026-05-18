#include <stdio.h>

// Structure Declaration
struct Time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    // Structure Variable
    struct Time t;

    // Taking Input
    printf("Enter Time (hh mm ss): ");
    scanf("%d %d %d", &t.hour, &t.min, &t.sec);

    // Displaying Data
    printf("\nTime is: %02d:%02d:%02d\n", t.hour, t.min, t.sec);

    return 0;
}