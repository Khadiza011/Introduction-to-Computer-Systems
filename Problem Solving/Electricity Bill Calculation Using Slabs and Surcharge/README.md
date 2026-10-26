# Electricity Bill Calculation Using Slabs and Surcharge

Write a C program to calculate an electricity bill based on the number of units consumed. Apply the following unit rates:

| Units Consumed | Rate per Unit |
|---|---:|
| First 50 units | Tk 0.50 |
| Next 100 units | Tk 0.75 |
| Next 100 units | Tk 1.20 |
| Above 250 units | Tk 1.50 |

After calculating the base bill, add a **20% surcharge** to determine the total bill.

## Solving Approach

1. Read the number of electricity units consumed.
2. Check that the input is valid and non-negative.
3. Use `if-else if-else` to calculate the charge for each slab.
4. Calculate the surcharge as 20% of the base bill.
5. Add the surcharge to the base bill.
6. Display the base bill, surcharge, and final bill.

**Important:** The rates are progressive. Each rate applies only to the units within its slab, not to all units consumed.

## Algorithm

1. Start.
2. Input the number of units consumed.
3. If the input is invalid or negative, display an error.
4. Calculate the base bill using the appropriate slabs.
5. Calculate `surcharge = base bill × 20 / 100`.
6. Calculate `total bill = base bill + surcharge`.
7. Display all three amounts.
8. Stop.

## Sample Input

```text
300
```

## Sample Output

```text
Enter units consumed: 300
Base bill = Tk 295.00
Surcharge = Tk 59.00
Total bill = Tk 354.00
```

## Calculation

For 300 units:

- First 50 units: \(50 \times 0.50 = 25\)
- Next 100 units: \(100 \times 0.75 = 75\)
- Next 100 units: \(100 \times 1.20 = 120\)
- Remaining 50 units: \(50 \times 1.50 = 75\)

**Base bill:** Tk 25 + 75 + 120 + 75 = Tk 295

**Surcharge:** Tk 295 × 20% = Tk 59

**Final bill:** Tk 295 + Tk 59 = **Tk 354**

## Concepts Used

- `if-else if-else` statements
- Arithmetic operators
- Progressive slab calculations
- `double` data type
- Input validation
- Formatted output using `printf()`

## How to Compile and Run

Compile using GCC:

```bash
gcc ElectricityBillSlabs.c -o ElectricityBillSlabs
```

Run on Linux/macOS:

```bash
./ElectricityBillSlabs
```

Run on Windows:

```text
ElectricityBillSlabs.exe
```
