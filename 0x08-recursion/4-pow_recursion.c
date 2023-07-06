#include <stdio.h>

/**
 * _pow_recursion - output value of x raised to the power of y
 * @x: The base value
 * @y: The exponent value
 *mederhoo
 * Return: x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	/* Error case: If y is negative, return -1 */
	if (y < 0)
		return (-1);

	/* Base case: If y is 0, return 1 */
	if (y == 0)
		return (1);

	/*
	 * Recursive call: Calculate power by multiplying x with the power of
	 * (x, y - 1)
	 */
	return (x * _pow_recursion(x, y - 1));
}
