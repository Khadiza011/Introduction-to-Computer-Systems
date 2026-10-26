# Solve a Quadratic Equation

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

Write a C program to find the two roots of a quadratic equation `ax² + bx + c = 0`. Read the coefficients `a`, `b`, and `c` in that order. For this exercise, assume the equation has real roots.

## Solving Approach

1. Read the coefficients `a`, `b`, and `c` as floating-point values.
2. Check that `a` is not zero, because the equation must be quadratic.
3. Calculate the discriminant: `D = b*b - 4*a*c`.
4. If `D` is negative, report that there are no real roots. Otherwise, calculate both roots using `(-b + sqrt(D)) / (2*a)` and `(-b - sqrt(D)) / (2*a)`.
5. Display both roots to two decimal places.

## Algorithm

1. Start.
2. Read `a`, `b`, and `c`.
3. If `a == 0`, display an error and stop.
4. Calculate the discriminant.
5. If the discriminant is negative, report no real roots; otherwise calculate and display both roots.
6. Stop.

## C Solution

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, discriminant, x1, x2;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0)
    {
        printf("The coefficient a must not be zero.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        printf("The equation has no real roots.\n");
        return 0;
    }

    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);

    return 0;
}
```

## Sample Input

```text
Three coefficients `a`, `b`, and `c`. Example: `1 5 6`.
```

## Sample Output

```text
x1 = -2.00
x2 = -3.00
```

## Concepts Used

- Conditional statements
- Discriminant
- Square root using `sqrt()`
- Floating-point arithmetic

## Compile and Run

Compile with GCC:

```bash
gcc QuadraticEquation.c -o QuadraticEquation -lm
```

Run on Linux/macOS:

```bash
./QuadraticEquation
```

Run on Windows:

```text
QuadraticEquation.exe
```

## Correction Note

The source document's sample input appears as `156`, and its sample roots are -3 and -2. The example `1 5 6` represents those coefficients clearly. The corrected code uses the standard quadratic formula and handles invalid or non-real-root cases.

## Exam Tip

Write down the formula first, choose data types that preserve the required precision, and test the program using the values provided in the question.

---

*Part of the ICS C Programming repository.*
