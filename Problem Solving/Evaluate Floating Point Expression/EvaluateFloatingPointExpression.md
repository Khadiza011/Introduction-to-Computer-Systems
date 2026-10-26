# Evaluate a Floating-Point Expression

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

Write a C program that declares four floating-point variables `a`, `b`, `c`, and `d`, initializes them to 2.3, 5.8, 1.1, and 3.5 respectively, and evaluates `(a + b - c) * d - a / d`.

## Solving Approach

1. Declare the four values as `double` for good precision.
2. Initialize them with the values given in the question.
3. Evaluate `(a + b - c) * d - a / d`, following C's operator precedence and parentheses.
4. Display the result to six decimal places.

## Algorithm

1. Start.
2. Initialize `a`, `b`, `c`, and `d`.
3. Calculate the expression and store the result.
4. Display the result.
5. Stop.

## C Solution

```c
#include <stdio.h>

int main(void)
{
    double a = 2.3;
    double b = 5.8;
    double c = 1.1;
    double d = 3.5;

    double result = (a + b - c) * d - a / d;

    printf("(%.1f + %.1f - %.1f) * %.1f - %.1f / %.1f = %.6f\n",
           a, b, c, d, a, d, result);

    return 0;
}
```

## Sample Input

```text
No input is required; the values are initialized in the program.
```

## Sample Output

```text
(2.3 + 5.8 - 1.1) * 3.5 - 2.3 / 3.5 = 23.842857
```

## Concepts Used

- Floating-point data types
- Operator precedence
- Parentheses
- Arithmetic expressions

## Compile and Run

Compile with GCC:

```bash
gcc EvaluateFloatingPointExpression.c -o EvaluateFloatingPointExpression
```

Run on Linux/macOS:

```bash
./EvaluateFloatingPointExpression
```

Run on Windows:

```bash
EvaluateFloatingPointExpression.exe
```

## Exam Tip

Identify the input, required output, and operators needed before writing the code. Test the program with the sample values and check edge cases such as invalid input or division by zero.

---

*Part of the ICS C Programming repository.*
