<<<<<<< HEAD
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
=======
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
>>>>>>> a6e0a47394198f786ebdc5e4b1e1d7f42da419ee
// based on user input for age.