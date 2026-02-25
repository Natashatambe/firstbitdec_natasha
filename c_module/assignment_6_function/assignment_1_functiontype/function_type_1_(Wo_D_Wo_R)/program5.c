
#include<stdio.h>
void age_eligible();
void main()
{
	age_eligible();
}
	void age_eligible()
	{
	int age;
	age=45;
	if(age>=18){
		printf("person is eligible for vote");
	}
	else
	{
			printf("person is not eligible for vote");
	}
}
// This program checks if a hardcoded age makes a person eligible to vote
