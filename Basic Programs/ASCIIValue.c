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

    printf("%c=%d\n", ch, (unsigned char)ch);

    return 0;
}
