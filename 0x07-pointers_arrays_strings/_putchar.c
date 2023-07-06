#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The printed
 *
 * Return: On  1.
 * On error, -1 is returned, and errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
