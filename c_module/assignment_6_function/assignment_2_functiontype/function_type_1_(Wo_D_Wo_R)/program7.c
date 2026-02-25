#include <stdio.h>
void checkAge();
void main() 
{
	checkAge();	
}
void checkAge(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age < 12) {
        printf("Child");
    }
    else {
        if (age <= 19) {
            printf("Teenager");
        }
        else {
            if (age <= 59) {
                printf("Adult");
            }
            else {
                printf("Senior");
            }
        }
    }
}
// This program categorizes a person into Child, Teenager, Adult, or Senior
// based on user input for age.
