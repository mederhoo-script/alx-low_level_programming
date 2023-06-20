#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: last digit extractorfrom
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* Get the absolute value of n */
	if (n < 0)
		n = -n;

	/* Extract the last digit */
	last_digit = n % 10;

	/* Print the last digit */
	_putchar(last_digit + '0');

	return (last_digit);
}
