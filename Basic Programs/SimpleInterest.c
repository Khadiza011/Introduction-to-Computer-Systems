#include <stdio.h>

int main(void)
{
    float principal, rate, time, interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (%%): ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100.0f;

    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
