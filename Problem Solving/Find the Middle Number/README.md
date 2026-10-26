# Find the Middle Number Among Three Distinct Numbers

Write a C program to find the middle number among three distinct integers using conditional statements.

### Sample Input

```text
10 25 15
```

### Sample Output

```text
The middle number is: 15
```

## Solving Approach

The middle number is the number that lies between the other two numbers. It is neither the smallest nor the largest.

1. Declare four integer variables: `a`, `b`, `c`, and `middle`.
2. Take three integers as input.
3. Check whether all three numbers are distinct. If any two numbers are equal, display an error message.
4. Check whether `a` lies between `b` and `c`.
5. If not, check whether `b` lies between `a` and `c`.
6. If neither condition is true, `c` must be the middle number.
7. Display the middle number.

## Algorithm

1. Start.
2. Input three integers: `a`, `b`, and `c`.
3. If the input is invalid, terminate the program.
4. If any two numbers are equal, display a message requesting distinct numbers and terminate.
5. If `(a > b && a < c) || (a < b && a > c)`, assign `a` to `middle`.
6. Otherwise, if `(b > a && b < c) || (b < a && b > c)`, assign `b` to `middle`.
7. Otherwise, assign `c` to `middle`.
8. Display `middle`.
9. Stop.

## Sample Execution

**Input**

```text
Enter three distinct numbers: 10 25 15
```

**Output**

```text
The middle number is: 15
```

## Step-by-Step Explanation

Consider the input:

- `a = 10`
- `b = 25`
- `c = 15`

**Step 1:** Check whether `a` is between `b` and `c`.

- `10 > 25` is false.
- Therefore, the first condition is false.

**Step 2:** Check whether `b` is between `a` and `c`.

- `25 > 10` is true.
- `25 < 15` is false.
- Therefore, the second condition is also false.

**Step 3:** Since neither `a` nor `b` is the middle number, the program assigns `c` to `middle`.

Therefore, the middle number is **15**.

## Additional Test Cases

| Input | Expected Output |
|---|---|
| `10 25 15` | `The middle number is: 15` |
| `25 15 10` | `The middle number is: 15` |
| `15 10 25` | `The middle number is: 15` |
| `5 5 8` | `Please enter three distinct numbers.` |

## Concepts Used

- `if-else if-else` conditional statements
- Relational operators (`>`, `<`, `==`)
- Logical operators (`&&`, `||`)
- Variable assignment
- Input validation

## Compile and Run

Compile using GCC:

```bash
gcc MiddleOfThreeNumbers.c -o MiddleOfThreeNumbers
```

Run on Linux/macOS:

```bash
./MiddleOfThreeNumbers
```

Run on Windows:

```text
MiddleOfThreeNumbers.exe
```
f the Introduction to Computer Systems (ICS) C Programming Repository.*
