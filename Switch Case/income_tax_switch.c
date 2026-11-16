#include <stdio.h>

int main() {
    float salary, tax;
    int choice;

    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    // Select tax category
    if (salary >= 9000) {
        choice = 1;
    }
    else if (salary >= 7500) {
        choice = 2;
    }
    else {
        choice = 3;
    }

    // Calculate tax using switch
    switch (choice) {
        case 1:
            tax = salary * 0.40;
            break;

        case 2:
            tax = salary * 0.30;
            break;

        case 3:
            tax = salary * 0.20;
            break;
    }

    printf("Income Tax = %.2f", tax);

    return 0;
}
