<<<<<<< HEAD


=======
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
#include <stdio.h>
void ispalindrome();
void main() 
{
	ispalindrome();
}


void ispalindrome(){
    int n = 121;          
    int original = n;     
    int reversed = 0;     
    int remainder;

    while (n > 0) {
        remainder = n % 10;            
        reversed = reversed * 10 + remainder;  
        n = n / 10;                   
    }

    if (reversed == original)
        printf("Palindrome");
    else
        printf("Not Palindrome");
<<<<<<< HEAD

}
=======
}
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
