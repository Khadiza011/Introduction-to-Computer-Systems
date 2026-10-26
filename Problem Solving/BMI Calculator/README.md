# BMI Calculator and Health Category

Write a C program to calculate Body Mass Index (BMI) using a person's weight in kilograms and height in meters. The program should display the calculated BMI and determine the corresponding category.

Use the following categories for this programming exercise:

| BMI Range | Category |
|---|---|
| Below 18.5 | Underweight |
| 18.5 to below 25 | Normal weight |
| 25 to below 30 | Overweight |
| 30 or above | Obese |

## Solving Approach

1. Declare three floating-point variables: `weight`, `height`, and `bmi`.
2. Take the person's weight in kilograms and height in meters as input.
3. Validate that the weight is non-negative and the height is greater than zero.
4. Calculate BMI using the formula:

   `BMI = Weight / (Height * Height)`

5. Display the calculated BMI to two decimal places.
6. Use an `if-else if-else` structure to determine the category.
7. Display the appropriate category.

## Algorithm

1. Start.
2. Input weight and height.
3. If the input is invalid, display an error message and stop.
4. Calculate `bmi = weight / (height * height)`.
5. Display the BMI.
6. If `bmi < 18.5`, display Underweight.
7. Otherwise, if `bmi < 25`, display Normal weight.
8. Otherwise, if `bmi < 30`, display Overweight.
9. Otherwise, display Obese.
10. Stop.

## Sample Input

```text
Enter your weight (in kg): 70
Enter your height (in meters): 1.75
```

## Sample Output

```text
Your BMI is: 22.86
You have a normal weight.
```

## Step-by-Step Calculation

Given:

- Weight = 70 kg
- Height = 1.75 m

**Step 1: Calculate BMI**

BMI = 70 / (1.75 × 1.75)

BMI = 70 / 3.0625

BMI ≈ 22.86

**Step 2: Determine the category**

Since 22.86 is greater than or equal to 18.5 and less than 25, the program displays **Normal weight**.

## Additional Test Cases

| Weight (kg) | Height (m) | Expected Category |
|---:|---:|---|
| 50 | 1.75 | Underweight |
| 70 | 1.75 | Normal weight |
| 85 | 1.75 | Overweight |
| 100 | 1.75 | Obese |

## Concepts Used

- `if-else if-else` conditional statements
- Floating-point variables
- Arithmetic operators
- Relational operators
- Input validation
- Formatted output using `printf()`

## Compile and Run

Compile using GCC:

```bash
gcc BMICalculator.c -o BMICalculator
```

Run on Linux/macOS:

```bash
./BMICalculator
```

Run on Windows:

```text
BMICalculator.exe
```
