# Read Three Integers but Store Only the First and Last

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

Write a C program that reads three integers from the keyboard, stores only the first and third integers in variables, skips assigning the middle integer to a variable, and displays the first and last values.

## Solving Approach

1. Declare two integer variables: `first` and `last`.
2. Use `scanf("%d %*d %d", &first, &last)`.
3. The `%*d` conversion reads and discards the middle integer without assigning it to a variable.
4. Display the stored first and last values.

## Algorithm

1. Start.
2. Declare `first` and `last`.
3. Read the first integer, discard the second, and read the third.
4. Display the first and last integers.
5. Stop.

## C Solution

```c
#include <stdio.h>

int main(void)
{
    int first, last;

    printf("Enter three integers: ");
    if (scanf("%d %*d %d", &first, &last) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("First Value = %d\n", first);
    printf("Last Value = %d\n", last);

    return 0;
}
```

## Sample Input

```text
Three integers separated by spaces or newlines.
```

## Sample Output

```text
First Value = 20
Last Value = 100
```

## Concepts Used

- Formatted input
- Assignment suppression (`%*d`)
- Variables
- Input validation

## Compile and Run

Compile with GCC:

```bash
gcc FirstAndLastInput.c -o FirstAndLastInput
```

Run on Linux/macOS:

```bash
./FirstAndLastInput
```

Run on Windows:

```bash
FirstAndLastInput.exe
```

## Exam Tip

Read the question carefully, identify the required input and output, and use the correct data types and format specifiers. Test the program with the sample values before submitting it.

---

*Part of the ICS C Programming repository.*
