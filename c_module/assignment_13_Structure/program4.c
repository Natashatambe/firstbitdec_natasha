#include <stdio.h>

// Structure Declaration
struct HR
{
    int id;
    char name[50];
    float salary;
    float commission;
};

int main()
{
    // Structure Variable
    struct HR h;

    // Taking Input
    printf("Enter HR ID: ");
    scanf("%d", &h.id);

    printf("Enter HR Name: ");
    scanf("%s", h.name);

    printf("Enter HR Salary: ");
    scanf("%f", &h.salary);

    printf("Enter HR Commission: ");
    scanf("%f", &h.commission);

    // Displaying Data
    printf("\nHR Details:\n");
    printf("ID = %d\n", h.id);
    printf("Name = %s\n", h.name);
    printf("Salary = %.2f\n", h.salary);
    printf("Commission = %.2f\n", h.commission);

    return 0;
}