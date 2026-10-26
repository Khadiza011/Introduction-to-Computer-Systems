# Volume of a Cylinder

**Course:** Introduction to Computer Systems (ICS)  
**Language:** C  
**Difficulty:** Beginner

## Exam Question

Write a C program that takes the radius and height of a cylinder as input and calculates its volume using `V = πr²h`. Use π = 3.1416.

## Solving Approach

1. Read radius and height as floating-point values.
2. Check that neither value is negative.
3. Calculate the volume using `PI * radius * radius * height`.
4. Display the volume to two decimal places.

## Algorithm

1. Start.
2. Read radius and height.
3. Validate both values.
4. Calculate `V = PI * radius * radius * height`.
5. Display the volume.
6. Stop.

## C Solution

```c
#include <stdio.h>

int main(void)
{
    const double PI = 3.1416;
    double radius, height, volume;

    printf("Enter the radius and height of the cylinder: ");
    if (scanf("%lf %lf", &radius, &height) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (radius < 0 || height < 0)
    {
        printf("Radius and height cannot be negative.\n");
        return 1;
    }

    volume = PI * radius * radius * height;

    printf("Volume of the cylinder: %.2f\n", volume);

    return 0;
}
```

## Sample Input

```text
Radius and height. Example: `3 7`.
```

## Sample Output

```text
Volume of the cylinder: 197.92
```

## Concepts Used

- Constants
- Floating-point arithmetic
- Mathematical formulas
- Input validation

## Compile and Run

Compile with GCC:

```bash
gcc CylinderVolume.c -o CylinderVolume
```

Run on Linux/macOS:

```bash
./CylinderVolume
```

Run on Windows:

```text
CylinderVolume.exe
```

## Exam Tip

Write down the formula first, choose data types that preserve the required precision, and test the program using the values provided in the question.

---

*Part of the ICS C Programming repository.*
