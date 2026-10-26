#include <stdio.h>

int main(void)
{
    double t;
    scanf("%lf",&t);
    if(t<0) puts("Freezing");
    else if(t<15) puts("Cold");
    else if(t<=25) puts("Warm");
    else if(t<=35) puts("Hot");
    else puts("Very Hot");;

    return 0;
}
