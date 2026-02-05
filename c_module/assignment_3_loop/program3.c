#include<stdio.h>
int main()
{
	int start=1,end=5,sum=0;
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	printf("%d",sum);
}
// This program calculates and prints the sum of integers from 1 to 5