#include <stdio.h>

/**
 * wildcmp - Compares two strings and checks for a match with
 * @s1: First str
 * @s2: Second
 *
 * Return: 1 if strings can be considered identical
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2 || (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0'))
		return (wildcmp(s1 + 1, s2 + 1));

	/* If s2 has wildcard *, try different possibilities by skipping characters */
	if (*s2 == '*' && *(s2 + 1) != '\0')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
