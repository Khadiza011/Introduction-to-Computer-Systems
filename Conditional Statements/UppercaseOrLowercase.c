#include <stdio.h>

int main(void)
{
    char ch;
    
    scanf(" %c",&ch);
   
    if(ch>='A'&&ch<='Z') 
    puts("Uppercase");
    
    else if(ch>='a'&&ch<='z') 
    puts("Lowercase");
    
    else 
    puts("Not an English letter");;

    return 0;
}
