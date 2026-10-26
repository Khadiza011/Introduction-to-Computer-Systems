# PC Purchase Discount Calculator

Sadia plans to purchase a high-performance PC from StarTech with the following specifications:

- **Processor:** Intel Core i7
- **RAM:** 16 GB
- **Storage:** 1 TB SSD
- **Graphics Card:** NVIDIA GeForce RTX 3060
- **Price:** $65,000

StarTech offers discounts based on the total purchase price according to the following rules:

| Total Purchase Price | Discount |
|---|---:|
| $50,000 or less | 0% |
| $50,001–$60,000 | 5% |
| $60,001–$70,000 | 7.5% |
| $70,001–$80,000 | 9% |
| Above $80,000 | 12% |

Write a C program that takes the total price as input, calculates the applicable discount, and displays the original price, discount amount, and final cost.

## Solving Approach

1. Declare variables to store the original price, discount amount, discount percentage, and final cost.
2. Take the total PC price as input from the user.
3. Use an `if-else if-else` structure to determine the applicable discount percentage.
4. Calculate the discount amount using:

   `Discount = Price × Discount Percentage / 100`

5. Calculate the final cost using:

   `Final Cost = Price − Discount`

6. Display the original price, discount amount, and final cost.

## Algorithm

1. Start.
2. Input the total PC price.
3. If the price is less than or equal to $50,000, set the discount to 0%.
4. Otherwise, determine the applicable discount based on the price range.
5. Calculate the discount amount.
6. Subtract the discount from the original price.
7. Display the price before discount, discount amount, and final cost.
8. Stop.

## Sample Input

```text
65000
```

## Sample Output

```text
Enter the total price of the PC: 65000
Total price before discount: $65000.00
Discount applied: $4875.00
Final cost: $60125.00
```

## Calculation

Given:

- Original price = $65,000
- Discount rate = 7.5%

**Step 1: Calculate the discount**

Discount = 65,000 × 7.5 / 100

Discount = $4,875

**Step 2: Calculate the final cost**

Final Cost = 65,000 − 4,875

Final Cost = $60,125

Therefore, Sadia needs to pay **$60,125** after the discount.

## Concepts Used

- `if-else if-else` conditional statements
- Relational operators
- Variables and data types
- Percentage calculations
- Floating-point arithmetic
- Input validation
- Formatted output using `printf()`

## How to Compile and Run

Compile using GCC:

```bash
gcc PCDiscountCalculator.c -o PCDiscountCalculator
```

Run on Linux/macOS:

```bash
./PCDiscountCalculator
```

Run on Windows:

```text
PCDiscountCalculator.exe
```
