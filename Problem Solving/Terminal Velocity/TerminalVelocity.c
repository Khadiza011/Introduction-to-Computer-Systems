#include <stdio.h>

int main(void)
{
    int u, a, t, v;

    printf("Enter initial velocity, acceleration, and time: ");
    if (scanf("%d %d %d", &u, &a, &t) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    v = u + a * t;

    printf("v = %d\n", v);

    return 0;
}
