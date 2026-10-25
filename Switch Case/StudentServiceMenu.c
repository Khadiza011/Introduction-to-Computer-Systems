#include <stdio.h>

int main(void)
{
    int choice;

    printf("===== Student Services =====\n");
    printf("1. View Course Information\n");
    printf("2. View Assignment Information\n");
    printf("3. View Exam Information\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Course: Introduction to Computer Systems\n");
            printf("Course Code: CSE 1110\n");
            break;

        case 2:
            printf("Check the course assignment instructions.\n");
            break;

        case 3:
            printf("Check the official examination schedule.\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
