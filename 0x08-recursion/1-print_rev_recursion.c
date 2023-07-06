#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in revers
 * @s: Pointer to the strin
 *
 *mederhoo
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);

	/* Print the current character */
	putchar(*s);
}
