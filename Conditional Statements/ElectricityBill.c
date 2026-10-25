#include <stdio.h>

int main(void)
{
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Invalid units\n");
    }
    else if (units <= 100)
    {
        bill = units * 5.0f;
        printf("Electricity bill = %.2f\n", bill);
    }
    else
    {
        bill = 100 * 5.0f + (units - 100) * 7.0f;
        printf("Electricity bill = %.2f\n", bill);
    }

    return 0;
}
