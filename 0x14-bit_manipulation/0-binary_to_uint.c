#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int len,
	int ba2;

	if (!b)
		return (0);

	a = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, ba2 = 1; len >= 0; len--, ba2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			a += ba2;
		}
	}

	return (a);
}
