#include<stdio.h>

// Structure declaration
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1;

    // Accept student details
    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNo);

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    // Display student details
    printf("\nStudent Details\n");
    printf("Roll Number = %d\n", s1.rollNo);
    printf("Name = %s\n", s1.name);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}