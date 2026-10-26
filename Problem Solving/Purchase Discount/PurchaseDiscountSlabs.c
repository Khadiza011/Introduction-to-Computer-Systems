#include <stdio.h>

int main(void)
{
    double amount;

    printf("Enter the total purchase amount: ");
    if (scanf("%lf", &amount) != 1 || amount < 0)
    {
        printf("Invalid amount.\n");
        return 1;
    }

    if (amount < 50)
        printf("NO DISCOUNT\n");
    else if (amount <= 100)
        printf("5%% discount\n");
    else if (amount <= 200)
        printf("10%% discount\n");
    else if (amount <= 500)
        printf("15%% discount\n");
    else
        printf("20%% discount\n");

    return 0;
}
