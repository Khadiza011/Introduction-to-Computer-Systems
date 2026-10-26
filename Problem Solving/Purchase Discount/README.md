# Purchase Discount 

Write a program that calculates a customer's discount category based on total purchase amount: 
no discount below 50; 
5% for 50–100; 
10% for 101–200; 
15% for 201–500; and 
20% above 500.

## Solving Approach

Read the purchase amount, reject negative values, then choose the discount category using the stated amount ranges. This question asks for the discount category, not the final bill.

## Algorithm

1. Start.
2. Read and validate the input.
3. Apply the required conditions or calculations.
4. Display the result.
5. Stop.

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
