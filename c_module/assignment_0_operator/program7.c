#include <stdio.h>

int main() {
    int min, hrs, rem;
    min = 10;
    hrs = min/ 60;
    rem = min % 60;
    printf("Hours = %d\n", hrs);
    printf("Remaining Min = %d", rem);

    return 0;
}

