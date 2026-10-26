# Read Three Integers but Store Only the First and Last

Write a C program that reads three integers from the keyboard, stores only the first and third integers in variables, skips assigning the middle integer to a variable, and displays the first and last values.

## Solving Approach

1. Declare two integer variables: `first` and `last`.
2. Use `scanf("%d %*d %d", &first, &last)`. (Three integers separated by spaces or newlines.)
3. The `%*d` conversion reads and discards the middle integer without assigning it to a variable.
4. Display the stored first and last values.

## Algorithm

1. Start.
2. Declare `first` and `last`.
3. Read the first integer, discard the second, and read the third.
4. Display the first and last integers.
5. Stop.

## Sample Input

```text
Enter three integers: 20 10 100
```

## Sample Output

```text
First Value = 20
Last Value = 100
```

## Concepts Used

- Formatted input
- Assignment suppression (`%*d`)
- Variables
- Input validation

## Compile and Run

Compile with GCC:

```bash
gcc FirstAndLastInput.c -o FirstAndLastInput
```

Run on Linux/macOS:

```bash
./FirstAndLastInput
```

Run on Windows:

```bash
FirstAndLastInput.exe
```
