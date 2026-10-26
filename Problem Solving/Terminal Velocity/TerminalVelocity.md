# Calculate Terminal Velocity

Write a C program to calculate the final velocity of a moving body using the equation `v = u + a * t`. Read the initial velocity `u`, acceleration `a`, and time `t` in that order.

## Solving Approach

1. Read the initial velocity, acceleration, and time as integers, matching the supplied example.
2. Calculate the velocity using `v = u + a * t`.
3. Display the result.

## Algorithm

1. Start.
2. Read `u`, `a`, and `t`.
3. Calculate `v = u + a * t`.
4. Display `v`.
5. Stop.

## Sample Input

```text
Three integers: initial velocity, acceleration, and time. Example: `5 6 12`.
```

## Sample Output

```text
v = 77
```

## Concepts Used

- Variables and data types
- Input using `scanf()`
- Arithmetic operators

## Compile and Run

Compile with GCC:

```bash
gcc TerminalVelocity.c -o TerminalVelocity
```

Run on Linux/macOS:

```bash
./TerminalVelocity
```

Run on Windows:

```text
TerminalVelocity.exe
```
