#include <stdio.h>

int main(void)
{
    char ch;
    scanf(" %c",&ch);
  
    if(ch>='A'&&ch<='Z') 
      ch=ch+('a'-'A');
      
    else if(ch>='a'&&ch<='z') 
      ch=ch-('a'-'A');
    
printf("Result = %c\n",ch);;

    return 0;
}
