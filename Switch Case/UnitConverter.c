#include <stdio.h>

int main(void)
{
    int choice;
    double temperature;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%lf", &temperature);

    switch (choice)
    {
        case 1:
            printf("Fahrenheit = %.2f\n",
                   temperature * 9.0 / 5.0 + 32.0);
            break;
        case 2:
            printf("Celsius = %.2f\n",
                   (temperature - 32.0) * 5.0 / 9.0);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
