#include <stdio.h>

int main(void)
{
    char ch, mirror;

    printf("Enter a lowercase letter: ");
    if (scanf(" %c", &ch) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (ch < 'a' || ch > 'z')
    {
        printf("Please enter a lowercase English letter.\n");
        return 0;
    }

    mirror = 'z' - (ch - 'a');

    printf("The mirror of '%c' in the alphabet is '%c'\n", ch, mirror);

    return 0;
}
