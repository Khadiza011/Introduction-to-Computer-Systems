# Evaluate Three Mathematical Expressions

Write a C program that reads three integers `a`, `b`, and `c`, then calculates `X = (a + b + c) / 3`, `Y = (a * b) / c`, and `Z = (a + b) * c`.

## Solving Approach

1. Read three integer values.
2. Check that `c` is not zero before calculating `Y`, because division by zero is undefined.
3. Use a floating-point variable for `X` so the average can include a fractional part.
4. Calculate `Y` and `Z` and display the results.

## Algorithm

1. Start.
2. Read `a`, `b`, and `c`.
3. If `c` is zero, display an error and stop.
4. Calculate `X`, `Y`, and `Z`.
5. Display the three results.
6. Stop.

## Sample Input

```text
Three integers; the example uses `9 12 3`.
```

## Sample Output

```text
X = 8.00
Y = 36
Z = 63
```

## Concepts Used

- Arithmetic expressions
- Integer and floating-point division
- Operator precedence
- Division-by-zero validation

## Compile and Run

Compile with GCC:

```bash
gcc EvaluateThreeExpressions.c -o EvaluateThreeExpressions
```

Run on Linux/macOS:

```bash
./EvaluateThreeExpressions
```

Run on Windows:

```bash
EvaluateThreeExpressions.exe
```

## Important Note

The formula for X is implemented with `3.0` so a fractional average is not lost. Y remains integer division to match the integer-based original exercise.

