<<<<<<< HEAD
#include<stdio.h>
void isamstrong();
int main()
{
	isamstrong();
	
}
void isamstrong(){
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
			printf("amstrong number");
		}
		else
		{
			printf("not amstrong number");
		}
}
=======
#include<stdio.h>
void isamstrong();
int main()
{
	isamstrong();
	
}
void isamstrong(){
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
			printf("amstrong number");
		}
		else
		{
			printf("not amstrong number");
		}
}
>>>>>>> a6e0a47394198f786ebdc5e4b1e1d7f42da419ee
// This program checks if a hardcoded number is an Armstrong number or not