#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Previous character: %c\n", ch - 1);
    printf("Next character: %c\n", ch + 1);

    return 0;
}
