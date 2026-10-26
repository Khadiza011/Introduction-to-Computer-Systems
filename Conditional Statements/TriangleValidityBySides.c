#include <stdio.h>

int main(void)
{
    double a,b,c;

    scanf("%lf%lf%lf",&a,&b,&c);

    if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
    puts("Valid triangle");

    else 
    puts("Invalid triangle");;

    return 0;
}
