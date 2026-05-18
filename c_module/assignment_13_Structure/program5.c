#include <stdio.h>

// Structure Declaration
struct SalesManager
{
    int id;
    char name[50];
    float salary;
    float incentive;
    int target;
};

int main()
{
    // Structure Variable
    struct SalesManager s;

    // Taking Input
    printf("Enter Sales Manager ID: ");
    scanf("%d", &s.id);

    printf("Enter Sales Manager Name: ");
    scanf("%s", s.name);

    printf("Enter Sales Manager Salary: ");
    scanf("%f", &s.salary);

    printf("Enter Incentive: ");
    scanf("%f", &s.incentive);

    printf("Enter Target: ");
    scanf("%d", &s.target);

    // Displaying Data
    printf("\nSales Manager Details:\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("Salary = %.2f\n", s.salary);
    printf("Incentive = %.2f\n", s.incentive);
    printf("Target = %d\n", s.target);

    return 0;
}