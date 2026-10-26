# Volume of a Cylinder

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
