#include "main.h"

/**
 * _puts - prints
 * @str: the string
 *mederhoo
 * Return: 0
 */
void _puts(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
