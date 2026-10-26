#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n;
    int round;
    printf("Enter a floating point number:");
    scanf("%f",&n);
    if(n>=0)
    {
        round=(int)(n+0.5);
    }
    else
    {
        round=(int)(n-0.5);
    }
    printf("Rounded integer: %d",round );
    return 0;
}
