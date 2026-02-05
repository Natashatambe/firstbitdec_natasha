#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
	float percentage;
    sub1 = 10;
    sub2 = 10;
    sub3 = 10;
    sub4 = 10;
    sub5 = 10;
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%", percentage);
    return 0;
}

