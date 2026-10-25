# Operators in C

Welcome to the **Operators in C** section of the Introduction to Computer Systems (ICS) repository.

Operators are fundamental elements of C programming that allow us to perform calculations, compare values, and evaluate logical conditions. Understanding operators is essential for solving programming problems and developing the logical foundation required for conditional statements and loops.

This section covers the core operators introduced in the ICS course, with beginner-friendly explanations and practical examples.

## Learning Objectives

After completing this section, students will be able to:

- Understand the purpose of operators in C.
- Perform mathematical calculations using arithmetic operators.
- Compare values using relational operators.
- Evaluate conditions using logical operators.
- Understand operator precedence and associativity.
- Predict the output of expressions.
- Apply operators to solve basic programming problems.
- Prepare for conditional statements and other problem-solving topics.

## Topics Covered

### 1. Introduction to Operators

- Definition of an operator
- Operands and expressions
- Operators and their roles in C
- Evaluating expressions
- Operator precedence and associativity

### 2. Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations.

| Operator | Name | Example |
|---|---|---|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |
| `%` | Modulus | `a % b` |

**Important notes:**

- Integer division discards the fractional part when both operands are integers.
- The modulus operator `%` returns the remainder of integer division.
- Division by zero must be avoided.
- The data types of operands can affect the result of an expression.

### 3. Relational Operators

Relational operators compare two values and produce a result of either true (`1`) or false (`0`) in C.

| Operator | Meaning | Example |
|---|---|---|
| `==` | Equal to | `a == b` |
| `!=` | Not equal to | `a != b` |
| `>` | Greater than | `a > b` |
| `<` | Less than | `a < b` |
| `>=` | Greater than or equal to | `a >= b` |
| `<=` | Less than or equal to | `a <= b` |

These operators are particularly important when making decisions in programs using `if`, `if-else`, and `switch`-related problem-solving exercises.

**Remember:** `=` is the assignment operator, whereas `==` is the equality operator.

### 4. Logical Operators

Logical operators combine or reverse conditions.

| Operator | Name | Example |
|---|---|---|
| `&&` | Logical AND | `a > 0 && b > 0` |
| `||` | Logical AND | `a > 0 `||` b > 0` |
| `!` | Logical NOT | `!(a > 0)` |

**Key concepts:**

- Logical AND (`&&`) is true when both conditions are true.
- Logical OR (`||`) is true when at least one condition is true.
- Logical NOT (`!`) reverses the truth value of a condition.
- Logical AND and OR use short-circuit evaluation in C.

### 5. Operator Precedence and Associativity

Operator precedence determines which operators are evaluated first in an expression. Associativity determines the evaluation direction when operators share the same precedence level.

For example:

```c
int result = 10 + 5 * 2;
```

The multiplication is performed before addition, so `result` becomes `20`.

Parentheses can make expressions easier to understand:

```c
int result = (10 + 5) * 2;
```

Here, `result` becomes `30`.

## How to Compile and Run

Using GCC, compile a program with:

```bash
gcc ArithmeticOperators.c -o ArithmeticOperators
```

Run on Linux or macOS:

```bash
./ArithmeticOperators
```

On Windows:

```bash
ArithmeticOperators.exe
```

## Common Mistakes to Avoid

- Confusing assignment (`=`) with equality (`==`).
- Assuming integer division preserves decimal values.
- Using `%` with floating-point operands.
- Ignoring operator precedence.
- Writing complex expressions without appropriate parentheses.
- Using logical operators incorrectly when combining conditions.
- Dividing by zero.

## Recommended Practice Method

1. Understand the operator and its purpose.
2. Predict the result of an expression before running the program.
3. Write a small C program to test the expression.
4. Compare your prediction with the actual output.
5. Test different values and data types.
6. Practice combining relational and logical operators.

## Connection to Other Topics

Operators are used throughout C programming. Arithmetic operators support calculations, while relational and logical operators help evaluate conditions. These concepts will be applied directly in the next sections on conditional statements, switch-case statements, and loops.

## Purpose of This Folder

This folder is maintained to organize operator-related C programs, reinforce fundamental programming concepts, and provide a practical reference for students preparing for laboratory exercises, class tests, assignments, and examinations.

**Understand the expression. Predict the result. Verify it with code.**
