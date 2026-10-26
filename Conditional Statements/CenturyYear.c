#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Input : ");
    scanf("%d",&year);

    if (year%100==0)
    {
        printf("%d is a century year",year);
    }
    else
    {
        printf("%d is not a century year",year);
    }
    return 0;
}
