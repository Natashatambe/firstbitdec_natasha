#include <stdio.h>

// Structure Declaration
struct Date
{
    int date;
    int month;
    int year;
};

int main()
{
    // Structure Variable
    struct Date d;

    // Taking Input
    printf("Enter Date (dd mm yyyy): ");
    scanf("%d %d %d", &d.date, &d.month, &d.year);

    // Displaying Data
    printf("\nDate is: %d/%d/%d\n", d.date, d.month, d.year);

    return 0;
}