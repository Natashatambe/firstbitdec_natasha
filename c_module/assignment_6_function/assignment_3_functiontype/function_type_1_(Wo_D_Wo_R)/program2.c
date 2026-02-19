#include<stdio.h>
void numcheck();
int main()
{
	 numcheck();
}
void numcheck(){
	int n=5;
	while(n<50)
	{
		n=n+5;
		printf("%d",n);
		
	}
}
// This program prints multiples of 5 starting from 10 up to 50