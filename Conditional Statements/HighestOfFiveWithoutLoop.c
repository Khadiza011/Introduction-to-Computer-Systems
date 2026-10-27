#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    int highest, position;

    printf("Enter five integers: ");

    if (scanf("%d %d %d %d %d",
              &a, &b, &c, &d, &e) != 5)
    {
        printf("Invalid input.\n");
        return 1;
    }

    highest = a;
    position = 1;

    if (b > highest)
    {
        highest = b;
        position = 2;
    }

    if (c > highest)
    {
        highest = c;
        position = 3;
    }

    if (d > highest)
    {
        highest = d;
        position = 4;
    }

    if (e > highest)
    {
        highest = e;
        position = 5;
    }

    printf("Highest value: %d\n", highest);
    printf("Input position: %d\n", position);

    return 0;
}
