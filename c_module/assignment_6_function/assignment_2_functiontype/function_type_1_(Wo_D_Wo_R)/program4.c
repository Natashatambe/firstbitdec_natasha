#include<stdio.h>
void checkMarks();
void main()
{
	
	checkMarks();
}
	
    void checkMarks	(){
	int marks;
	printf(" Enter marks:");
	scanf("%d",&marks);
	
	if(marks>75)
	{
		printf("Distinction");
	}
	else
	{
		if(marks>65)	
		{
			printf("First Class");
		}
		else
		{
			if(marks>55)
			{
				printf("Second Class");
			}
			else
			{
				if(marks>=40)
				{
					printf("pass class");
				}
				else
				{
					printf("fail");
				}
			}
		}
	}
}
// This program assigns a grade based on user input for marks