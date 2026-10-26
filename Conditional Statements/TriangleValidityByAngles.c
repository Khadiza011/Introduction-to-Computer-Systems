#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0&&b>0&&c>0&&a+b+c==180) puts("Valid triangle");
    else puts("Invalid triangle");;

    return 0;
}
