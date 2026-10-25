#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Equal: %d\n", a == b);
    printf("Not equal: %d\n", a != b);
    printf("First is greater: %d\n", a > b);
    printf("First is smaller: %d\n", a < b);

    return 0;
}
