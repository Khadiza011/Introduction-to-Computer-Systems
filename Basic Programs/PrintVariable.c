#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    float b;
    char ch;
    scanf("%d",&a);
    scanf("%f",&b);
    scanf(" %c",&ch);
    printf("The integer value: %d\n",a);
    printf("The floating value: %f\n",b);
    printf("The character value: %c",ch+32);

    return 0;
}
