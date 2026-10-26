# Reverse an Integer

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

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

## C Solution

```c
#include <stdio.h>

int main(void)
{
    int n, digit;
    long long reversed = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (n < 0)
    {
        printf("Please enter a non-negative integer\n");
        return 0;
    }

    while (n > 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("Reversed number = %lld\n", reversed);

    return 0;
}
```

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

## Exam Tip

Before writing the code in an exam, identify the required formula or condition, write the steps in order, and check the solution with the sample input. Pay attention to data types, format specifiers, and boundary cases.

---

*Part of the ICS C Programming practice repository.*
