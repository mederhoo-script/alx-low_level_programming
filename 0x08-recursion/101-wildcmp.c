#include <stdio.h>

/**
 * wildcmp - Compares two strings and checks for a match with wildcard *
 * @s1: First string
 * @s2: Second string
 *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2 || *s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
