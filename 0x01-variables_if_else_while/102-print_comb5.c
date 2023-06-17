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
			int i_first = i / 10;
			int i_second = i % 10;
			int j_first = j / 10;
			int j_second = j % 10;

			putchar('0' + i_first);
			putchar('0' + i_second);
			putchar(' ');
			putchar('0' + j_first);
			putchar('0' + j_second);

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
