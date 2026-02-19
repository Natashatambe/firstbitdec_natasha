#include<stdio.h>
void salaryCal();
int main()
{
	salaryCal();
}
 void salaryCal()
 {
 	
	int Basic=1200;
	int DA,TA,HRA,TOTALsalary;
	if(Basic<=5000){
		DA =(10*Basic)/100;
		TA =(20*Basic)/100;
		HRA =(25*Basic)/100;
	}
	else{
		DA =(15*Basic)/100;
		TA =(25*Basic)/100;
		HRA =(30*Basic)/100;
	}
	TOTALsalary = Basic + DA + TA + HRA;
	printf("TOTAL SALARY :%d", TOTALsalary);
}
// This program calculates the total salary based on a hardcoded basic salary
// and different allowances depending on the salary range.