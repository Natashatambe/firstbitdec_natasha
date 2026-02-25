#include <stdio.h>
void checkAge();
void main() 
{
	checkAge();	
}
<<<<<<< HEAD
 void checkAge(){
=======
void checkAge(){
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
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
<<<<<<< HEAD
// based on user input for age.
=======
// based on user input for age.
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
