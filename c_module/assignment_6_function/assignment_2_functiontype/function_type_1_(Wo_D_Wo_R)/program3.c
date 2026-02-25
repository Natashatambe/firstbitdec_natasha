<<<<<<< HEAD

#include <stdio.h>
void checkgreater();
void main()
{
	checkgreater();
}
=======

#include <stdio.h>
void checkgreater();
void main()
{
	checkgreater();
}

 void checkgreater()
 {
    int num1, num2, num3;

    printf("Enter num1, num2, num3 :- ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 >= num2 && num1 >= num3)
	 {
        printf("num1 is greater");
      }
    else 
	{
        if(num2 >= num1 && num2 >= num3) 
		{
            printf("num2 is greater");
        }
        else
		 {
            printf("num3 is greater");
        }
    }
}
// This program finds the greatest of three numbers
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a

// based on user input for the three numbers.
