#include <stdio.h>

int main(void)
{
    char color;

    printf("Enter traffic light color (R/Y/G): ");

    if (scanf(" %c", &color) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    switch (color)
    {
        case 'R':
        case 'r':
            printf("STOP\n");
            break;

        case 'Y':
        case 'y':
            printf("GET READY\n");
            break;

        case 'G':
        case 'g':
            printf("GO\n");
            break;

        default:
            printf("Invalid traffic light color.\n");
    }

    return 0;
}
