#include <stdio.h>

int main(void)
{
    int units;
    double bill, surcharge, total;

    printf("Enter units consumed: ");

    if (scanf("%d", &units) != 1 || units < 0)
    {
        printf("Invalid units.\n");
        return 1;
    }

    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units <= 150)
    {
        bill = 50 * 0.50
             + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        bill = 50 * 0.50
             + 100 * 0.75
             + (units - 150) * 1.20;
    }
    else
    {
        bill = 50 * 0.50
             + 100 * 0.75
             + 100 * 1.20
             + (units - 250) * 1.50;
    }

    surcharge = bill * 20 / 100.0;
    total = bill + surcharge;

    printf("Base bill = Tk %.2f\n", bill);
    printf("Surcharge = Tk %.2f\n", surcharge);
    printf("Total bill = Tk %.2f\n", total);

    return 0;
}
