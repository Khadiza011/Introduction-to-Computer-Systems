#include <stdio.h>

int main(void)
{
    int first, last;

    printf("Enter three integers: ");
    if (scanf("%d %*d %d", &first, &last) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("First Value = %d\n", first);
    printf("Last Value = %d\n", last);

    return 0;
}
