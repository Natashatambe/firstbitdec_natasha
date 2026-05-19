#include<stdio.h>

struct Product
{
    char name[50];
    float price;
    int quantity;
};

int main()
{
    struct Product cart[10];
    int n, i;
    float total = 0, amount;

    // Accept number of products
    printf("Enter number of products: ");
    scanf("%d", &n);

    // Accept product details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Product %d\n", i + 1);

        printf("Enter Product Name: ");
        scanf("%s", cart[i].name);

        printf("Enter Price: ");
        scanf("%f", &cart[i].price);

        printf("Enter Quantity: ");
        scanf("%d", &cart[i].quantity);
    }

    // Display bill
    printf("\n\n----- BILL -----\n");
    printf("Name\tPrice\tQuantity\tAmount\n");

    for(i = 0; i < n; i++)
    {
        amount = cart[i].price * cart[i].quantity;
        total = total + amount;

        printf("%s\t%.2f\t%d\t\t%.2f\n",
               cart[i].name,
               cart[i].price,
               cart[i].quantity,
               amount);
    }

    // Display total cost
    printf("\nTotal Cost = %.2f\n", total);

    return 0;
}