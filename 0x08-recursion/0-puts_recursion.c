#include <stdio.h>

/**
 * _puts_recursion - string recursion with new line
 *mederhoo night solved pleace cheker dont stop work today
 * @s: printed pointer
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
