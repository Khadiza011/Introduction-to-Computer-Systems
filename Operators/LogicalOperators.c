#include <stdio.h>

int main(void)
{
    int a = 10, b = 5;

    printf("AND = %d\n", a > 0 && b > 0);
    printf("OR = %d\n", a > 0 || b < 0);
    printf("NOT = %d\n", !(a > 0));

    return 0;
}
