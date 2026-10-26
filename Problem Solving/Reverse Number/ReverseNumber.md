# Reverse an Integer

Write a C program that reads a non-negative integer and displays its digits in reverse order as a number.

## Input

A non-negative integer.

## Expected Output

The reversed numeric value.

## Solving Approach

1. **Understand the question:** Identify the input values and the result required.
2. **Plan the logic:** Extract the last digit using `% 10`, append it to the reversed value, and remove the last digit using `/ 10`. Leading zeros in the reversed result are not preserved.
3. **Implement in C:** Use suitable variables, operators, and control structures.
4. **Test the program:** Compare the program's result with the sample output and try additional values.
   
## Sample Input

```text
1234
```

## Sample Output

```text
Reversed number = 4321
```

## Concepts Used

- `while` loop
- Digit extraction
- Arithmetic operations

## How to Compile and Run

Compile with GCC:

```bash
gcc ReverseNumber.c -o ReverseNumber
```

Run on Linux or macOS:

```bash
./ReverseNumber
```

Run on Windows:

```bash
ReverseNumber.exe
```
