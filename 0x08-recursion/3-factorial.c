#include <stdio.h>

/**
 * factorial - Print factorial of a given number
 * @n: The factorial number
 *mederhoo
 * Return: Factorial of n, or -1 if n is negative (error)
 */
int factorial(int n)
{
	/* Base case: If n is 0, factorial is 1 */
	if (n == 0)
		return (1);

	/* Error case: If n is negative, return -1 */
	if (n < 0)
		return (-1);

	/*
	 * Recursive call: Calculate factorial by multiplying n with the factorial
	 * of (n - 1)
	 */
	return (n * factorial(n - 1));
}
