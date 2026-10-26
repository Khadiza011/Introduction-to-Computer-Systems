# Check Whether a Number Is a Perfect Square Using `sqrt()`

Write a C program to check whether a given integer is a perfect square using the `sqrt()` function from the `<math.h>` library.

A number is called a perfect square if it can be expressed as the product of an integer multiplied by itself.

**Examples:**
- 25 is a perfect square because \(5 \times 5 = 25\).
- 36 is a perfect square because \(6 \times 6 = 36\).
- 20 is not a perfect square because no integer multiplied by itself equals 20.

## Solving Approach

1. Declare an integer variable named `num` to store the input number.
2. Read an integer from the user using `scanf()`.
3. If the input is negative, display a message because negative integers are not perfect squares of real integers.
4. Use the `sqrt()` function to calculate the square root of the number.
5. Convert the square root to an integer and store it in `sqrt_num`.
6. Multiply `sqrt_num` by itself and compare the result with the original number.
7. If both values are equal, the number is a perfect square; otherwise, it is not.

## Algorithm

1. Start.
2. Read an integer `num`.
3. If the input is invalid or `num` is negative, display an appropriate message.
4. Calculate `sqrt_num = sqrt(num)`.
5. If `sqrt_num * sqrt_num == num`, print that the number is a perfect square.
6. Otherwise, print that the number is not a perfect square.
7. Stop.
## Sample Input and Output

### Example 1: Perfect Square

**Input**
```text
Enter a number: 25
```

**Output**
```text
25 is a perfect square.
```

### Example 2: Not a Perfect Square

**Input**
```text
Enter a number: 20
```

**Output**
```text
20 is not a perfect square.
```

### Example 3: Negative Number

**Input**
```text
Enter a number: -9
```

**Output**
```text
-9 is not a perfect square.
```

## Concepts Used

- `if-else` conditional statements
- Integer variables and type conversion
- The `sqrt()` function
- The `<math.h>` library
- Relational operator (`==`)
- Input validation

## How to Compile and Run

Compile the program using GCC:

```bash
gcc PerfectSquareUsingSqrt.c -o PerfectSquareUsingSqrt -lm
```

Run on Linux or macOS:

```bash
./PerfectSquareUsingSqrt
```

On Windows, run:

```text
PerfectSquareUsingSqrt.exe
```

**Note:** The `-lm` option links the mathematical library when required by GCC, particularly on Linux.


The key idea is to calculate the integer square root and then square it again. If the result matches the original number, it is a perfect square.

For example:

- `sqrt(25) = 5`, and `5 * 5 = 25`, so it is a perfect square.
- `sqrt(20)` is approximately `4.47`. Converting it to an integer gives `4`, and `4 * 4 = 16`, which is not equal to `20`.

---

