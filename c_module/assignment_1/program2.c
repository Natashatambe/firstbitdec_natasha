#include<stdio.h>
void main()
 {
 	int n = 151, result,a1,a2,a3;
 	a1= n % 10;
 	n = n/10;
 	a2= n%10;
 	n = n/10;
 	a3= n%10;
 	result = a1*100+a2*10+a3;
 	
	if(result == 151)
 	  {
 	  	printf("number is palindrome");
	   }
	else
		{
		printf("number is not palindrome");
		}
 }