#include<stdio.h>
void main()
{
	int year = 2059;
	if ((year%4 == 0 && year% 100!=0)||year% 400 == 0)
	{
		printf("leap year");
	}
	else{
		printf("Not leap year");
	}
}
//