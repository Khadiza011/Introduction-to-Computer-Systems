# Arithmetic Operations on ASCII Values

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

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

## C Solution

```c
#include <stdio.h>

int main(void)
{
    char first, second;
    int code1, code2;

    printf("Enter the first character: ");
    if (scanf(" %c", &first) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the second character: ");
    if (scanf(" %c", &second) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    code1 = (unsigned char)first;
    code2 = (unsigned char)second;

    printf("ASCII value of '%c' is %d\n", first, code1);
    printf("ASCII value of '%c' is %d\n", second, code2);
    printf("Sum of ASCII values: %d\n", code1 + code2);
    printf("Difference of ASCII values: %d\n", code1 - code2);

    return 0;
}
```

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

## Exam Tip

Identify the input, required output, and operators needed before writing the code. Test the program with the sample values and check edge cases such as invalid input or division by zero.

---

*Part of the ICS C Programming repository.*
