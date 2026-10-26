# PurchaseDiscount Slabs

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

Write a program that calculates a customer's discount category based on total purchase amount: no discount below 50; 5% for 50–100; 10% for 101–200; 15% for 201–500; and 20% above 500.

## Solving Approach

Read the purchase amount, reject negative values, then choose the discount category using the stated amount ranges. This question asks for the discount category, not the final bill.

## Algorithm

1. Start.
2. Read and validate the input.
3. Apply the required conditions or calculations.
4. Display the result.
5. Stop.

## C Solution

```c
#include <stdio.h>

int main(void)
{
    double amount;

    printf("Enter the total purchase amount: ");
    if (scanf("%lf", &amount) != 1 || amount < 0)
    {
        printf("Invalid amount.\n");
        return 1;
    }

    if (amount < 50)
        printf("NO DISCOUNT\n");
    else if (amount <= 100)
        printf("5%% discount\n");
    else if (amount <= 200)
        printf("10%% discount\n");
    else if (amount <= 500)
        printf("15%% discount\n");
    else
        printf("20%% discount\n");

    return 0;
}
```

## Sample Input

```text
250
```

## Sample Output

```text
15% discount
```

## Compile and Run

```bash
gcc PurchaseDiscountSlabs.c -o PurchaseDiscountSlabs
```

Run on Linux/macOS with `./PurchaseDiscountSlabs` or on Windows with `PurchaseDiscountSlabs.exe`.

## Note

The thresholds and rates above are taken from the ICS course question. Check boundary values when testing.
