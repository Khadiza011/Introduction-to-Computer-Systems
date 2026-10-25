#include <stdio.h>

int main(void)
{
    float costPrice, sellingPrice;

    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (costPrice < 0 || sellingPrice < 0)
    {
        printf("Invalid price\n");
    }
    else if (sellingPrice > costPrice)
    {
        printf("Profit = %.2f\n", sellingPrice - costPrice);
    }
    else if (costPrice > sellingPrice)
    {
        printf("Loss = %.2f\n", costPrice - sellingPrice);
    }
    else
    {
        printf("No profit, no loss\n");
    }

    return 0;
}
