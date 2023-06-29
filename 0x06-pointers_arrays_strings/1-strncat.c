#include "main.h"
/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to be used from src
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Find the end of the destination string */
	while (*dest)
		dest++;

	/* Append at most n bytes from the source string to the destination string */
	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	/* Add the terminating null byte */
	*dest = '\0';

	return ptr;
}
