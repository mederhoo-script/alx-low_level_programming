#include "main.h"
/**
 * _strlen - print of length of a string
 * O
 * @s: char to check
 * Description: retun
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
