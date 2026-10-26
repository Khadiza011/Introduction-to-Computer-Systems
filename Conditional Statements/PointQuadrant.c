#include <stdio.h>

int main(void)
{
    double x,y;
    scanf("%lf%lf",&x,&y);

    if(x==0&&y==0) puts("Origin");

    else if(x==0) puts("On Y-axis");

    else if(y==0) puts("On X-axis");

    else if(x>0&&y>0) puts("Quadrant I");

    else if(x<0&&y>0) puts("Quadrant II");

    else if(x<0&&y<0) puts("Quadrant III");

    else puts("Quadrant IV");;

    return 0;
}
