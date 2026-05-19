#include<stdio.h>

struct Player
{
    char name[50];
    int matches;
    int runs;
    int wickets;
};

// Function to accept player information
void acceptPlayer(struct Player p[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Player %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", p[i].name);

        printf("Enter Matches Played: ");
        scanf("%d", &p[i].matches);

        printf("Enter Runs: ");
        scanf("%d", &p[i].runs);

        printf("Enter Wickets: ");
        scanf("%d", &p[i].wickets);
    }
}

// Function to display all players
void displayPlayer(struct Player p[], int n)
{
    int i;

    printf("\n----- Player Information -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Matches Played: %d\n", p[i].matches);
        printf("Runs: %d\n", p[i].runs);
        printf("Wickets: %d\n", p[i].wickets);
    }
}

int main()
{
    struct Player p[10];
    int i;

    int maxRuns = 0;
    int maxWickets = 0;

    // Accept details
    acceptPlayer(p, 10);

    // Display details
    displayPlayer(p, 10);

    // Find player with maximum runs and wickets
    for(i = 1; i < 10; i++)
    {
        if(p[i].runs > p[maxRuns].runs)
        {
            maxRuns = i;
        }

        if(p[i].wickets > p[maxWickets].wickets)
        {
            maxWickets = i;
        }
    }

    // Display player with maximum runs
    printf("\n\nPlayer with Maximum Runs");
    printf("\nName: %s", p[maxRuns].name);
    printf("\nRuns: %d", p[maxRuns].runs);

    // Display player with maximum wickets
    printf("\n\nPlayer with Maximum Wickets");
    printf("\nName: %s", p[maxWickets].name);
    printf("\nWickets: %d", p[maxWickets].wickets);

    return 0;
}