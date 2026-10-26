#include <stdio.h>

int main(void)
{
    int units;
    float bill;

    printf("Enter electricity units: ");
    if (scanf("%d", &units) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (units < 0)
    {
        printf("Units cannot be negative\n");
        return 0;
    }
    else if (units <= 100)
    {
        bill = units * 5.0f;
    }
    else
    {
        bill = 100 * 5.0f + (units - 100) * 7.0f;
    }

    printf("Bill = %.2f Tk\n", bill);

    return 0;
}
