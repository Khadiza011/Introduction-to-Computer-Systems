#include <stdio.h>

int main(void)
{
    int category, item;

    printf("1. Drinks\n");
    printf("2. Snacks\n");
    printf("Select category: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("1. Tea\n");
            printf("2. Coffee\n");
            printf("Select drink: ");
            scanf("%d", &item);

            switch (item)
            {
                case 1:
                    printf("You selected Tea\n");
                    break;
                case 2:
                    printf("You selected Coffee\n");
                    break;
                default:
                    printf("Invalid drink choice\n");
            }
            break;

        case 2:
            printf("Snacks selected\n");
            break;

        default:
            printf("Invalid category\n");
    }

    return 0;
}
