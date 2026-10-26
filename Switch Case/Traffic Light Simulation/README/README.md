# Traffic Light Simulation Using switch-case

Write a C program that takes a traffic light color as a character input and displays the corresponding instruction using a `switch-case` statement.

Use the following rules:

- `R` or `r` — Stop
- `Y` or `y` — Get Ready
- `G` or `g` — Go

If the user enters any other character, display an invalid color message.

## Solving Approach

1. Declare a character variable named `color`.
2. Read the traffic light color from the user.
3. Use `switch (color)` to check the entered character.
4. Handle both uppercase and lowercase versions of each color.
5. Display the corresponding instruction.
6. Use `break` after each case.
7. Use `default` to handle invalid input.

## Algorithm

1. Start.
2. Input the traffic light color.
3. Evaluate the character using `switch-case`.
4. If the color is `R` or `r`, display `STOP`.
5. If the color is `Y` or `y`, display `GET READY`.
6. If the color is `G` or `g`, display `GO`.
7. Otherwise, display `Invalid traffic light color`.
8. Stop.

## Sample Input

```text
g
```

## Sample Output

```text
Enter traffic light color (R/Y/G): GO
```

## Additional Test Cases

| Input | Expected Output |
|---|---|
| `R` | STOP |
| `r` | STOP |
| `Y` | GET READY |
| `g` | GO |
| `B` | Invalid traffic light color |

## Concepts Used

- `switch-case` statement
- Character variables
- Multiple `case` labels
- `break` statement
- `default` case
- Input validation

## Compile and Run

Compile using GCC:

```bash
gcc TrafficLightSwitch.c -o TrafficLightSwitch
```

Run on Linux/macOS:

```bash
./TrafficLightSwitch
```

Run on Windows:

```text
TrafficLightSwitch.exe
```
