#include <stdio.h>

int main() {
    float sales, commission;

    printf("Enter total sales: ");
    scanf("%f", &sales);

    if (sales >= 1 && sales <= 10000) {
        commission = sales * 0.04;
    }
    else if (sales > 10000 && sales <= 20000) {
        commission = sales * 0.05;
    }
    else if (sales > 20000 && sales <= 30000) {
        commission = sales * 0.06;
    }
    else if (sales > 30000) {
        commission = sales * 0.07;
    }
    else {
        printf("Invalid sales amount");
        return 0;
    }

    printf("Commission = %.2f", commission);

    return 0;
}
