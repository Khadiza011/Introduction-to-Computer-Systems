#include <stdio.h>

int main(void)
{
    int totalDays, years, weeks, days;

    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    if (totalDays < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 0;
    }

    years = totalDays / 365;
    totalDays = totalDays % 365;

    weeks = totalDays / 7;
    days = totalDays % 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", days);

    return 0;
}
