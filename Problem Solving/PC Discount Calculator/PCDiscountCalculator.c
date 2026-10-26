#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price, discount=0, finalcost;

    printf("Enter the total price of the PC: ");
    scanf("%d",&price);

  if (price > 80000)
    {
        discount = price * 12 / 100;
    } 
else if (price > 70000)
    {
        discount = price * 9 / 100;
    } 
else if (price > 60000)
    {
        discount = price * 7.5 / 100;
    } 
else if (price > 50000)
    {
        discount = price * 5 / 100;
    } 
else 
   {
        printf("you will not get any discount.\n");
    }

    finalcost = price - discount ;

   if (discount>0){
    printf("Total price before discount: %d\n",price);
    printf("Discount applied: %d\n",discount);
    printf("Final cost: %d\n",finalcost);
    
}
    return 0;
}

