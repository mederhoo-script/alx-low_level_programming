#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all.
 * @n: The number passed.
 *
 * Return: total
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(ar, int);
	}

	va_end(ar);

	return (total);
}
