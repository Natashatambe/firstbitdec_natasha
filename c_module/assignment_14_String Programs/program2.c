#include<stdio.h>

struct Time
{
    int hrs, min, sec;
};

// Function to convert time into seconds
int convertToSeconds(struct Time t)
{
    return (t.hrs * 3600) + (t.min * 60) + t.sec;
}

int main()
{
    struct Time t1, t2, sum;

    // Accept first time
    printf("Enter first time (hrs min sec): ");
    scanf("%d%d%d", &t1.hrs, &t1.min, &t1.sec);

    // Accept second time
    printf("Enter second time (hrs min sec): ");
    scanf("%d%d%d", &t2.hrs, &t2.min, &t2.sec);

    // Display entered times
    printf("\nFirst Time = %d:%d:%d", t1.hrs, t1.min, t1.sec);
    printf("\nSecond Time = %d:%d:%d", t2.hrs, t2.min, t2.sec);

    // Addition of time
    sum.sec = t1.sec + t2.sec;
    sum.min = t1.min + t2.min;
    sum.hrs = t1.hrs + t2.hrs;

    // Carry seconds to minutes
    if(sum.sec >= 60)
    {
        sum.min = sum.min + (sum.sec / 60);
        sum.sec = sum.sec % 60;
    }

    // Carry minutes to hours
    if(sum.min >= 60)
    {
        sum.hrs = sum.hrs + (sum.min / 60);
        sum.min = sum.min % 60;
    }

    // Display result
    printf("\n\nAddition of Time = %d:%d:%d",
           sum.hrs, sum.min, sum.sec);

    // Convert time into seconds
    printf("\n\nFirst Time in Seconds = %d",
           convertToSeconds(t1));

    printf("\nSecond Time in Seconds = %d",
           convertToSeconds(t2));

    return 0;
}