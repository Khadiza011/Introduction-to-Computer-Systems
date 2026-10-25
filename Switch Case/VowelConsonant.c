#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter an English alphabet: ");
    scanf(" %c", &ch);

    switch (ch)
    {
        case 'a': case 'e': case 'i':
        case 'o': case 'u':
        case 'A': case 'E': case 'I':
        case 'O': case 'U':
            printf("Vowel\n");
            break;

        default:
            if ((ch >= 'A' && ch <= 'Z') ||
                (ch >= 'a' && ch <= 'z'))
                printf("Consonant\n");
            else
                printf("Invalid input\n");
    }

    return 0;
}
