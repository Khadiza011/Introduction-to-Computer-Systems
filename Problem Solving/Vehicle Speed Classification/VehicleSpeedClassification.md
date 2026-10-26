# VehicleSpeedClassification

Write a program that classifies vehicle speed: 
Stopped (0 km/h), 
Slow (1–40 km/h), 
Normal (41–80 km/h), 
Fast (81–120 km/h), and 
Very Fast (above 120 km/h).

## Solving Approach

Read the speed as an integer. Reject negative speeds, then use an if-else chain with the exact ranges from the question.

## Algorithm

1. Start.
2. Read and validate the input.
3. Apply the required conditions or calculations.
4. Display the result.
5. Stop.

## Sample Input

```text
65
```

## Sample Output

```text
NORMAL
```

## Compile and Run

```bash
gcc VehicleSpeedClassification.c -o VehicleSpeedClassification
```

Run on Linux/macOS with `./VehicleSpeedClassification` or on Windows with `VehicleSpeedClassification.exe`.
