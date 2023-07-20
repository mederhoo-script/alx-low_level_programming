#include "function_pointers.h"

/**
 * print_name - the function
 * @name: name to be printed
 * @f: name function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
