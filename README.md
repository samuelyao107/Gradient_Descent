# Gradient Descent Programs

This repository contains two C++ programs that implement the Gradient Descent algorithm to find the minimum of mathematical functions.

## Program 1: Finding the Minimum of f(x) = x² - 2x + 1

This program uses the gradient descent algorithm to find the minimum of the function:

\[ f(x) = x² - 2x + 1 \]

### How It Works

- The program starts with an initial value for `x` and iteratively updates `x` using the gradient descent formula:

  \[
  x_{n+1} = x_n - \alpha \cdot (2x - 2)
  \]

  where:
  - \( \alpha \) is the learning rate.
  - The derivative of the function \( f(x) \) is \( 2x - 2 \).

### Program Details

- The user inputs:
  - The starting point for \( x \).
  - The learning rate \( \alpha \).
  - The number of iterations.

- After performing the iterations, the program prints the approximate minimum of the function.

### Example Usage

bash
This program computes the minimum of f(x)=x²-2x+1 using gradient descent algorithm.
Enter the starting point: 50
Enter the learning rate: 0.7
Enter the number of iterations: 20
The minimum of f(x)=x²-2x+1 is f(1.00256)

## Program 2:  Finding the Minimum of f(x, y) = 2x² + 3y² + xy + 5
This program uses the gradient descent algorithm to find the minimum of the function: 
f(x, y) = 2x² + 3y² + xy + 5


## How It Works

The program starts with initial values for `x` and `y`, and iteratively updates `x` and `y` using the gradient descent formula:


Where:
- `∂f/∂x = 4x + y` is the partial derivative with respect to `x`.
- `∂f/∂y = x + 6y` is the partial derivative with respect to `y`.
- `α` is the learning rate.

## Program Details

The user inputs:
- The starting points for `x` and `y`.
- The learning rate `α`.
- The number of iterations.

After performing the iterations, the program prints the approximate coordinates `(x, y)` where the minimum is located.



