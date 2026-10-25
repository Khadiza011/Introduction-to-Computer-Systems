#include <stdio.h>

int main(void)
{
    int choice;
    double balance = 5000.0, amount;

    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Balance = %.2f Tk\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);

            if (amount > 0)
                printf("New balance = %.2f Tk\n",
                       balance + amount);
            else
                printf("Invalid amount\n");
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%lf", &amount);

            if (amount <= 0)
                printf("Invalid amount\n");
            else if (amount > balance)
                printf("Insufficient balance\n");
            else
                printf("New balance = %.2f Tk\n",
                       balance - amount);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
