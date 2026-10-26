# Electricity Bill Calculation

Write a C program to calculate an electricity bill using these example rates: the first 100 units cost 5 Tk per unit, and each additional unit costs 7 Tk. Assume no other charges.

## Input

Number of electricity units consumed.

## Expected Output

The calculated bill in Tk.

## Solving Approach

1. **Understand the question:** Identify the input values and the result required.
2. **Plan the logic:** Validate that units are non-negative. If units are at most 100, multiply by 5. Otherwise, calculate `100 × 5 + (units − 100) × 7`.
3. **Implement in C:** Use suitable variables, operators, and control structures.
4. **Test the program:** Compare the program's result with the sample output and try additional values.

## Sample Input

```text
150
```

## Sample Output

```text
Bill = 850.00 Tk
```

## Concepts Used

- Conditional statements
- Arithmetic calculations
- Slab-based logic

## How to Compile and Run

Compile with GCC:

```bash
gcc ElectricityBill.c -o ElectricityBill
```

Run on Linux or macOS:

```bash
./ElectricityBill
```

Run on Windows:

```bash
ElectricityBill.exe
```
