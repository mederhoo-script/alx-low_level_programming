#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return:  0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
	for (j = i; j <= 99; j++)
	{
	if (i < j)
	{
	putchar((i / 10) + 48);
	putchar((i % 10) + 48);
	putchar(' ');
	putchar((j / 10) + 48);
	putchar((j % 10) + 48);
	if (i != 98 || j != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
