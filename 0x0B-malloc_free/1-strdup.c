#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer
 * a copy of.
 * @str: source string
 *
 * Return: returns pointer to duplicated string.
 * It returns NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int x, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
		copy[x] = str[x];
	copy[len] = '\0';

	return (copy);
}
