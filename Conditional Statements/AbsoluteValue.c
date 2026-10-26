#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;

  scanf("%d",&n);

  if (n<0)
  {
      printf("Absolute value: %d",n*(-1));
  }
  else
  {
      printf("Absolute value: %d",n);
  }
    return 0;
}
