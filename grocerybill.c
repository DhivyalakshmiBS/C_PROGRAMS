#include <stdio.h>
int main()
{
    char item[20];
    char choice;
    int quantity;
    float price, bill, total = 0;
    do
    {
        printf("\nEnter item name: ");
        scanf("%s", item);
        printf("Enter price: ");
        scanf("%f", &price);
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        bill = price * quantity;
        total = total + bill;
        printf("Item: %s\n", item);
        printf("Bill for this item = %.2f\n", bill);
        printf("\nDo you want to add another item? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    printf("\nTotal Grocery Bill = %.2f\n", total);

    return 0;
}