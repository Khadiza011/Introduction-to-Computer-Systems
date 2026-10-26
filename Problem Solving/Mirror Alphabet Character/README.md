# Find the Mirror Character in the Alphabet

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

Write a C program that reads a lowercase English letter and prints its mirror letter in the alphabet: `a` maps to `z`, `b` maps to `y`, and so on.

## Solving Approach

1. Read a character from the user.
2. Check that it is between `'a'` and `'z'`.
3. Calculate the mirror letter with `mirror = 'z' - (ch - 'a')`.
4. Display the original letter and its mirror.

## Algorithm

1. Start.
2. Read a character.
3. Check whether it is a lowercase English letter.
4. If valid, calculate and display its mirror; otherwise, display an error.
5. Stop.

## C Solution

```c
#include <stdio.h>

int main(void)
{
    char ch, mirror;

    printf("Enter a lowercase letter: ");
    if (scanf(" %c", &ch) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (ch < 'a' || ch > 'z')
    {
        printf("Please enter a lowercase English letter.\n");
        return 0;
    }

    mirror = 'z' - (ch - 'a');

    printf("The mirror of '%c' in the alphabet is '%c'\n", ch, mirror);

    return 0;
}
```

## Sample Input

```text
A lowercase English letter; the example uses `a`.
```

## Sample Output

```text
Enter a lowercase letter: a
The mirror of 'a' in the alphabet is 'z'
```

## Concepts Used

- Character arithmetic
- Relational operators
- Conditional statements
- ASCII-compatible character ordering

## Compile and Run

Compile with GCC:

```bash
gcc MirrorAlphabetCharacter.c -o MirrorAlphabetCharacter
```

Run on Linux/macOS:

```bash
./MirrorAlphabetCharacter
```

Run on Windows:

```bash
MirrorAlphabetCharacter.exe
```

## Exam Tip

Identify the input, required output, and operators needed before writing the code. Test the program with the sample values and check edge cases such as invalid input or division by zero.

---

*Part of the ICS C Programming repository.*
