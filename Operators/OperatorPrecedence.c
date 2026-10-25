#include <stdio.h>

int main(void)
{
    int result1, result2;

    result1 = 10 + 5 * 2;
    result2 = (10 + 5) * 2;

    printf("Without parentheses = %d\n", result1);
    printf("With parentheses = %d\n", result2);

    return 0;
}
