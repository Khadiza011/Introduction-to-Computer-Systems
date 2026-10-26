# Arithmetic Operations on ASCII Values

Write a C program that reads two characters and displays each character's ASCII value, the sum of the ASCII values, and the difference between them.

## Solving Approach

1. Read the first character and then the second; use `" %c"` for the second input to skip whitespace.
2. Convert each character to an integer before arithmetic.
3. Calculate `sum = code1 + code2` and `difference = code1 - code2`.
4. Display both ASCII values and the calculated results.

## Algorithm

1. Start.
2. Read two characters.
3. Convert them to their integer character codes.
4. Calculate the sum and difference.
5. Display all results.
6. Stop.

## Sample Input

```text
Two characters; the example uses `A` and `b`.
```

## Sample Output

```text
Enter the first character: A
Enter the second character: b
ASCII value of 'A' is 65
ASCII value of 'b' is 98
Sum of ASCII values: 163
Difference of ASCII values: -33
```

## Concepts Used

- Character-to-integer conversion
- Arithmetic operators
- Character input
- Variables

## Compile and Run

Compile with GCC:

```bash
gcc ASCIIArithmeticOperations.c -o ASCIIArithmeticOperations
```

Run on Linux/macOS:

```bash
./ASCIIArithmeticOperations
```

Run on Windows:

```bash
ASCIIArithmeticOperations.exe
```

## Important Note

The examples use ASCII characters. On systems using a different execution character set, the integer codes may differ.
