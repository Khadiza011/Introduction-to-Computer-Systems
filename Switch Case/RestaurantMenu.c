#include <stdio.h>

int main(void)
{
    int choice, quantity;
    int price = 0;

    printf("===== Restaurant Menu =====\n");
    printf("1. Burger - 250 Tk\n");
    printf("2. Pizza  - 400 Tk\n");
    printf("3. Sandwich - 150 Tk\n");
    printf("Choose an item: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1: price = 250; break;
        case 2: price = 400; break;
        case 3: price = 150; break;
        default:
            printf("Invalid choice\n");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (quantity <= 0)
    {
        printf("Invalid quantity\n");
        return 0;
    }

    printf("Total bill = %d Tk\n", price * quantity);

    return 0;
}
