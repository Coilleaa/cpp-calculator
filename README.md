# C++ Console Calculator

A console-based calculator written in **C++** that performs a variety of mathematical operations including basic arithmetic, advanced calculations, trigonometry, logarithms, and quadratic equation solving.

## Features

### Basic Math
- Addition
- Subtraction
- Multiplication
- Division

### Advanced Math
- Modulo
- Absolute value
- GCD (Greatest Common Divisor)
- LCM (Least Common Multiple)
- Factorial

### Exponential
- Power calculation (a^b)

### Roots
- Square root
- Cube root

### Algebra
- Quadratic equation solver (ax² + bx + c = 0)

### Trigonometry
- sin(x)
- cos(x)
- tan(x)
- cot(x)

Supports **Degree** and **Radian** modes.

### Logarithm
- logₐ(x)
- log10(x)
- ln(x)

## Input Validation

The program includes robust input validation:
- Prevents invalid numeric input
- Handles division by zero
- Checks domain errors for logarithm and trigonometric functions

## How to Compile

```bash
g++ calculator.cpp -o calculator
