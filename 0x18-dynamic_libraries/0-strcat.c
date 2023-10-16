#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of the destination string */
	while (*dest)
		dest++;

	/* Append the source string to the destination string */
	while (*src)
		*dest++ = *src++;

	/* Add the terminating null byte */
	*dest = '\0';

	return (ptr);
}
