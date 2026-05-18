#include <stdio.h>

// Structure Declaration
struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    // Structure Variable
    struct Employee emp;

    // Taking Input
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    // Displaying Data
    printf("\nEmployee Details:\n");
    printf("ID = %d\n", emp.id);
    printf("Name = %s\n", emp.name);
    printf("Salary = %.2f\n", emp.salary);

    return 0;
}