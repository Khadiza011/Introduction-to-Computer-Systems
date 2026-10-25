# Switch-Case Statements in C

Welcome to the **Switch-Case Statements** section of the Introduction to Computer Systems (ICS) repository.

The `switch` statement is a decision-making construct in C that allows a program to select one execution path from multiple alternatives based on the value of an expression. It is particularly useful when a program needs to compare a single expression against several constant values.

This section covers the fundamentals of `switch-case`, the use of `break` and `default`, nested switch statements, and practical problem-solving examples.

## Learning Objectives

After completing this section, students will be able to:

- Understand the purpose and syntax of the `switch` statement.
- Use `case` labels to handle different values.
- Apply the `break` statement to control execution.
- Use `default` to handle unmatched cases.
- Understand fall-through behavior in switch statements.
- Implement nested `switch-case` statements.
- Differentiate between `if-else` and `switch-case`.
- Solve basic menu-driven and real-life programming problems.

## Topics Covered

### 1. Introduction to Switch-Case

- Definition and purpose of the `switch` statement
- Syntax and structure
- The controlling expression
- `case` labels and constant expressions
- Selecting a matching case
- The role of `break` and `default`

### 2. Basic Syntax

```c
switch (expression)
{
    case constant1:
        // Statements
        break;

    case constant2:
        // Statements
        break;

    default:
        // Statements when no case matches
}
```

The controlling expression must have an appropriate integer or enumeration type in C. Each `case` label must be a constant expression compatible with that type.


### 4. The `break` Statement

The `break` statement terminates the current `switch` statement and transfers control to the statement following it.

Without `break`, execution may continue into subsequent case labels. This behavior is known as **fall-through**.

### 5. The `default` Case

The `default` case executes when no matching `case` label is found. It is useful for handling invalid choices or unexpected input values.

A `default` case is optional, but including one often makes a program more user-friendly.

### 6. Nested Switch-Case

A nested `switch` statement is a `switch` statement placed inside another `switch` statement. It can be used when one selection depends on the outcome of another selection.

**Filename:** `NestedSwitchCase.c`

```c
#include <stdio.h>

int main()
{
    int category, item;

    printf("1. Drinks\n");
    printf("2. Snacks\n");
    printf("Enter category: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("1. Tea\n");
            printf("2. Coffee\n");
            printf("Enter item: ");
            scanf("%d", &item);

            switch (item)
            {
                case 1:
                    printf("You selected Tea.\n");
                    break;

                case 2:
                    printf("You selected Coffee.\n");
                    break;

                default:
                    printf("Invalid drink selection.\n");
            }
            break;

        case 2:
            printf("Snacks selected.\n");
            break;

        default:
            printf("Invalid category.\n");
    }

    return 0;
}
```

### 7. Switch-Case vs. If-Else

| Feature | `switch-case` | `if-else` |
|---|---|---|
| Primary use | Select among constant values | Evaluate conditions |
| Complex conditions | Not directly supported in case labels | Supported |
| Range checking | Not directly supported | Supported |
| Multiple alternatives | Uses `case` labels | Uses `else if` |
| Default path | `default` | `else` |

The appropriate structure depends on the problem requirements.

## How to Compile and Run

Compile a program using GCC:

```bash
gcc DayOfWeek.c -o DayOfWeek
```

Run on Linux or macOS:

```bash
./DayOfWeek
```

Run on Windows:

```bash
DayOfWeek.exe
```

You can also use Code::Blocks or another C-compatible IDE.

## Common Mistakes to Avoid

- Forgetting `break` when fall-through is not intended.
- Using non-constant expressions as `case` labels.
- Repeating duplicate case values.
- Writing invalid types for the controlling expression.
- Forgetting to handle invalid user choices.
- Confusing `=` with `==`.
- Using `switch` for conditions involving ranges or complex comparisons.

## Recommended Practice Method

1. Read the problem statement carefully.
2. Identify the expression or variable used for selection.
3. List all possible cases.
4. Decide what should happen for each case.
5. Add `break` where necessary.
6. Include a `default` case when appropriate.
7. Test valid, invalid, and boundary inputs.
8. Trace the program to understand its execution.

## Connection to Other Topics

This section builds on relational and logical operators and conditional statements. It prepares students for more structured problem-solving exercises, especially menu-driven programs.

## Purpose of This Folder

This folder organizes switch-case examples and practice programs to help students understand multiway selection, improve logical thinking, and prepare for ICS laboratory exercises, class tests, assignments, and examinations.

**Choose the right case. Control the flow. Solve the problem.**
