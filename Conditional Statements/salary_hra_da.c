#include <stdio.h>

int main() {
    float salary, hra, da;

    printf("Enter salary: ");
    scanf("%f", &salary);

    if (salary >= 5000 && salary <= 10000) {
        // HRA = 10%, DA = 5%
        hra = salary * 0.10;
        da = salary * 0.05;
    }
    else if (salary > 10000 && salary <= 15000) {
        // HRA = 15%, DA = 8%
        hra = salary * 0.15;
        da = salary * 0.08;
    }
    else {
        printf("Salary out of range");
        return 0;
    }

    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);

    return 0;
}
