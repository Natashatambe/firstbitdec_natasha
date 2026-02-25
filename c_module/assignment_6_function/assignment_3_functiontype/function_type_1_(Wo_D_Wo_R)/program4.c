<<<<<<< HEAD

=======
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
#include<stdio.h>
void checkcount();
int main()
{
	checkcount();
}
void checkcount(){
	int i=1,n=7,count=0;
	while(i<n)
	{
		if(n%i==0)
		{
			count=1;
		}
		i++;
	}
		if(count == 0 && n>1)
		{
			printf("prime");
		}
		else
		{
			printf("odd");
		}
}
<<<<<<< HEAD
>>>>>>> a6e0a47394198f786ebdc5e4b1e1d7f42da419ee
// This program checks if a hardcoded number is prime or not
=======
// This program checks if a hardcoded number is prime or not
>>>>>>> 46f7b99b1881c3a6a68def393925fceeac9a3d4a
