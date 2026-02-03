<<<<<<< HEAD
#include <stdio.h>

void main() {
    int n = 12345;       // hardcoded input
    int first, last;

    last = n % 10;       // last digit

    int temp = n;
    while (temp >= 10) { // loop to get first digit
        temp = temp / 10;
    }
    first = temp;        // first digit

    int sum = first + last;
    printf("%d", sum);
}
=======
#include <stdio.h>

void main() {
    int n = 12345;       // hardcoded input
    int first, last;

    last = n % 10;       // last digit

    int temp = n;
    while (temp >= 10) { // loop to get first digit
        temp = temp / 10;
    }
    first = temp;        // first digit

    int sum = first + last;
    printf("%d", sum);
}
>>>>>>> 0157f369d6e5baee63230daf501f8243715d59ca
