# Conditional Statements in C

Welcome to the **Conditional Statements** section of the Introduction to Computer Systems (ICS) repository.

Conditional statements allow a program to make decisions based on specified conditions. They enable a program to execute different blocks of code depending on whether a condition is true or false.

This section introduces the fundamental decision-making structures in C, helping students develop logical thinking and solve problems involving comparisons, eligibility, grading, and other real-life scenarios.

## Learning Objectives

After completing this section, students will be able to:

- Understand the purpose of conditional statements in C.
- Use `if` statements to execute code when a condition is true.
- Apply `if-else` statements to handle two alternative outcomes.
- Use the `if-else-if` ladder to evaluate multiple conditions.
- Implement nested `if-else` statements.
- Combine relational and logical operators with conditions.
- Trace program execution and predict outputs.
- Solve basic decision-making problems using C.

## Topics Covered

### 1. Introduction to Conditional Statements

- Definition and purpose of conditional statements
- Decision-making in programming
- Conditions and Boolean results
- Relational and logical operators in conditions
- Understanding how program execution changes based on conditions

### 2. The `if` Statement

The `if` statement executes a block of code when a specified condition is true.

**Syntax:**

```c
if (condition)
{
    // Statements to execute if true
}
```

**Example:**

```c
#include <stdio.h>

int main()
{
    int age = 20;

    if (age >= 18)
    {
        printf("Eligible to vote.\n");
    }

    return 0;
}
```

**Expected Output:**

```text
Eligible to vote.
```

### 3. The `if-else` Statement

The `if-else` statement provides two alternative execution paths. One block executes when the condition is true, and the other executes when it is false.

**Syntax:**

```c
if (condition)
{
    // Statements if true
}
else
{
    // Statements if false
}
```

## How to Compile and Run

Make sure GCC or another C compiler is installed.

**Step 1: Compile the program**

```bash
gcc EvenOrOdd.c -o EvenOrOdd
```

**Step 2: Run the program**

Linux or macOS:

```bash
./EvenOrOdd
```

Windows:

```bash
Even
