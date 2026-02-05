#include<stdio.h>
int main()
{
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
// This program checks if a hardcoded number is prime or not