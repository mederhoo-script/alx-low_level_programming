#include "function_pointers.h"

/**
 * array_iterator - function
 * parameter
 *
 * @array: array
 * @size: size
 * @action: a pointer
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
