#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The number to generate the times table for
 */
void print_times_table(int n)
{
	int row, column, result;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;

			if (column != 0)
				_putchar(',');
			_putchar(' ');

			if (result <= 9)
				_putchar(' ');
			else if (result <= 99)
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
