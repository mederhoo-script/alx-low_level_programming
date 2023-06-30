#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * Mederhoo
 * @str: changed string
 * Return: A pointer 
 *
 */

char *string_toupper(char *str)

{

	int m= 0;

	while (str[m])
	{
	if (str[m] >= 'a' && str[m] <= 'z')
	str[m] -= 32;
m++;
	}
	return (str);

}
