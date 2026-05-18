#include <stdio.h>

// Structure Declaration
struct Admin
{
    int id;
    char name[50];
    float salary;
    float allowance;
};

int main()
{
    // Structure Variable
    struct Admin a;

    // Taking Input
    printf("Enter Admin ID: ");
    scanf("%d", &a.id);

    printf("Enter Admin Name: ");
    scanf("%s", a.name);

    printf("Enter Admin Salary: ");
    scanf("%f", &a.salary);

    printf("Enter Admin Allowance: ");
    scanf("%f", &a.allowance);

    // Displaying Data
    printf("\nAdmin Details:\n");
    printf("ID = %d\n", a.id);
    printf("Name = %s\n", a.name);
    printf("Salary = %.2f\n", a.salary);
    printf("Allowance = %.2f\n", a.allowance);

    return 0;
}