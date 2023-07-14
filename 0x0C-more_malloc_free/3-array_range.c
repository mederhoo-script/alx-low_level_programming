#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array
 * @min: minimum
 * @max: maximum
 *
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *rang;
	int si, i;

	if (min > max)
		return (NULL);

	si = max - min + 1;

	rang = malloc(sizeof(int) * si);
	if (rang == NULL)
		return (NULL);

	for (i = 0; i < si; i++)
		rang[i] = min++;

	return (rang);
}
