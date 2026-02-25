
#include <stdio.h>
void checkPrize();
void main()
{
	
	 checkPrize();
	
}


 void checkPrize()
 {
    float price, discount;
    char s;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Student? (y/n): ");
    scanf(" %c", &s);

    if (s == 'y' && price > 500)
        discount = price * 0.20;
    else if (s == 'y')
        discount = price * 0.10;
    else if (s == 'n' && price > 600)
        discount = price * 0.15;
    else
        discount = 0;

    printf("Discount = %.2f", discount);
    printf("\nFinal Price = %.2f", price - discount);
}
// This program calculates a discount on a given price

// based on whether the buyer is a student and the price amount.