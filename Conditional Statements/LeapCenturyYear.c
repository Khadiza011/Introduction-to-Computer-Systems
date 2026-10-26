#include <stdio.h>

int main() {
    int year;
    printf("Enter a century year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a leap century year.\n", year);
    } else {
        printf("%d is not a leap century year.\n", year);
    }

    return 0;
}
