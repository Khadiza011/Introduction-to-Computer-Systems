#include <stdio.h>

int main(void)
{
    double x;
    scanf("%lf",&x);
    int rounded = (int)(x>=0 ? x+0.5 : x-0.5);
    printf("Rounded = %d\n",rounded);;

    return 0;
}
