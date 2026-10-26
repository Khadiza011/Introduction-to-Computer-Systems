#include <stdio.h>

int main(void)
{
    float weight, height, bmi;

    printf("Enter your weight (in kg): ");
    if (scanf("%f", &weight) != 1 || weight < 0)
    {
        printf("Invalid weight.\n");
        return 1;
    }

    printf("Enter your height (in meters): ");
    if (scanf("%f", &height) != 1 || height <= 0)
    {
        printf("Invalid height.\n");
        return 1;
    }

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("You are underweight.\n");
    }
    else if (bmi < 25)
    {
        printf("You have a normal weight.\n");
    }
    else if (bmi < 30)
    {
        printf("You are overweight.\n");
    }
    else
    {
        printf("You are obese.\n");
    }

    return 0;
}
