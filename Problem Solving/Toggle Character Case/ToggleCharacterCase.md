# Convert a Character to Opposite Case

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

Write a C program to convert uppercase letters to lowercase and lowercase letters to uppercase. Non-alphabetic characters should remain unchanged.

## Solving Approach

Use ASCII-compatible character ranges and adjust the character code by 32.

## Algorithm

1. Start.
2. Read the required input.
3. Apply the condition or formula described above.
4. Display the result.
5. Stop.

## C Solution

```c
#include <stdio.h>

int main(void)
{
    char ch;
    scanf(" %c",&ch);
    if(ch>='A'&&ch<='Z') ch=ch+('a'-'A');
    else if(ch>='a'&&ch<='z') ch=ch-('a'-'A');
    printf("Result = %c\n",ch);;

    return 0;
}
```

## Sample Input

```text
B
```

## Sample Output

```text
Result = b
```

## Concepts Used

- Variables and data types
- `scanf()` and `printf()`
- Conditional statements
- Relational and logical operators where required

## Compile and Run

```bash
gcc ToggleCharacterCase.c -o ToggleCharacterCase
```

Linux/macOS: `./ToggleCharacterCase`  
Windows: `ToggleCharacterCase.exe`

## Exam Tip

Check boundary cases, use the correct format specifiers, and verify the result manually with the sample input.

---

*Part of the ICS C Programming repository.*
