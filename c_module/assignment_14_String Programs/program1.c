#include<stdio.h>

struct Book
{
    int id;
    char bname[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b;

    // Accept values from user
    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf("%s", b.bname);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("Enter Book Price: ");
    scanf("%f", &b.price);

    // Display values
    printf("\n--- Book Details ---\n");
    printf("Book ID: %d\n", b.id);
    printf("Book Name: %s\n", b.bname);
    printf("Author Name: %s\n", b.author);
    printf("Book Price: %.2f\n", b.price);

    return 0;
}