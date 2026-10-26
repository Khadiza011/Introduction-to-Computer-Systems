# Electricity Bill Calculation

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

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

## C Solution

```c
#include <stdio.h>

int main(void)
{
    int units;
    float bill;

    printf("Enter electricity units: ");
    if (scanf("%d", &units) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (units < 0)
    {
        printf("Units cannot be negative\n");
        return 0;
    }
    else if (units <= 100)
    {
        bill = units * 5.0f;
    }
    else
    {
        bill = 100 * 5.0f + (units - 100) * 7.0f;
    }

    printf("Bill = %.2f Tk\n", bill);

    return 0;
}
```

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

## Exam Tip

Before writing the code in an exam, identify the required formula or condition, write the steps in order, and check the solution with the sample input. Pay attention to data types, format specifiers, and boundary cases.

---

*Part of the ICS C Programming practice repository.*
