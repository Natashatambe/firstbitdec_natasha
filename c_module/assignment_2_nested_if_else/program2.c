#include<stdio.h>
void main()
{
	int side1,side2,side3;
	
	printf("Enter side1, side2,side3 :- ");
	scanf("%d %d %d",&side1 , &side2 , &side3);
	
	if(side1 == side2 && side2==side3 && side3==side1)
	{
		printf("the triangle is equilateral");
	}
	else
	{
		if(side1 == side2 || side2 == side3 || side3 == side1)
		{
			printf("the triangle is isosceles");
		}
		else
		{
			printf("the triangle is Scalene");
		}
	}
	
}
// This program determines the type of triangle (equilateral, isosceles, or scalene)
// based on user input for the lengths of its three sides.