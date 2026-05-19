#include<stdio.h>
#include<string.h>

struct Movie
{
    char title[50];
    char director[50];
    int releaseYear;
    char genre[30];
};

void addMovies(struct Movie m[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Movie %d\n", i + 1);

        printf("Enter Title: ");
        scanf("%s", m[i].title);

        printf("Enter Director Name: ");
        scanf("%s", m[i].director);

        printf("Enter Release Year: ");
        scanf("%d", &m[i].releaseYear);

        printf("Enter Genre: ");
        scanf("%s", m[i].genre);
    }
}

void displayMovies(struct Movie m[], int n)
{
    int i;

    printf("\n----- Movie Database -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nMovie %d\n", i + 1);
        printf("Title: %s\n", m[i].title);
        printf("Director: %s\n", m[i].director);
        printf("Release Year: %d\n", m[i].releaseYear);
        printf("Genre: %s\n", m[i].genre);
    }
}

void searchMovie(struct Movie m[], int n)
{
    char searchTitle[50];
    int i, found = 0;

    printf("\nEnter movie title to search: ");
    scanf("%s", searchTitle);

    for(i = 0; i < n; i++)
    {
        if(strcmp(m[i].title, searchTitle) == 0)
        {
            printf("\nMovie Found!");
            printf("\nTitle: %s", m[i].title);
            printf("\nDirector: %s", m[i].director);
            printf("\nRelease Year: %d", m[i].releaseYear);
            printf("\nGenre: %s\n", m[i].genre);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nMovie not found!\n");
    }
}

void updateMovie(struct Movie m[], int n)
{
    char updateTitle[50];
    int i, found = 0;

    printf("\nEnter movie title to update: ");
    scanf("%s", updateTitle);

    for(i = 0; i < n; i++)
    {
        if(strcmp(m[i].title, updateTitle) == 0)
        {
            printf("\nEnter new Director Name: ");
            scanf("%s", m[i].director);

            printf("Enter new Release Year: ");
            scanf("%d", &m[i].releaseYear);

            printf("Enter new Genre: ");
            scanf("%s", m[i].genre);

            printf("\nMovie record updated successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nMovie not found!\n");
    }
}

int main()
{
    struct Movie movies[10];
    int n;

    printf("Enter number of movies: ");
    scanf("%d", &n);

    // Add movie records
    addMovies(movies, n);

    // Display all movies
    displayMovies(movies, n);

    // Search movie
    searchMovie(movies, n);

    // Update movie
    updateMovie(movies, n);

    // Display updated records34
    displayMovies(movies, n);

    return 0;
}