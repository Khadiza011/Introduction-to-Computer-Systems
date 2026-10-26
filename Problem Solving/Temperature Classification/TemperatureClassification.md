# Temperature Classification

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

Write a C program to classify temperature: Freezing below 0°C, Cold from 0 to 14°C, Warm from 15 to 25°C, Hot from 26 to 35°C, and Very Hot above 35°C.

## Solving Approach

Use an if-else chain with the boundaries in ascending order.

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
    double t;
    scanf("%lf",&t);
    if(t<0) puts("Freezing");
    else if(t<15) puts("Cold");
    else if(t<=25) puts("Warm");
    else if(t<=35) puts("Hot");
    else puts("Very Hot");;

    return 0;
}
```

## Sample Input

```text
28
```

## Sample Output

```text
Hot
```

## Concepts Used

- Variables and data types
- `scanf()` and `printf()`
- Conditional statements
- Relational and logical operators where required

## Compile and Run

```bash
gcc TemperatureClassification.c -o TemperatureClassification
```

Linux/macOS: `./TemperatureClassification`  
Windows: `TemperatureClassification.exe`

## Exam Tip

Check boundary cases, use the correct format specifiers, and verify the result manually with the sample input.

---

*Part of the ICS C Programming repository.*
