#include <stdio.h>

int main(void)
{
    long long a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    
    if(a<=0||b<=0||c<=0) 
        puts("Not a Pythagorean triplet");
    
    else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) 
        puts("Pythagorean triplet");
    
    else 
        puts("Not a Pythagorean triplet");;

    return 0;
}
