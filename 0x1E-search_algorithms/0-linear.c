#include "search_algos.h"

/**
* linear_search- searchin
* @array: array
* @size: size
* @value: value
* Return: int
*/
int linear_search(int *array, size_t size, int value)
{
int i;
	if (array == NULL)
	{
		return (-1);
	};
for (i = 0; i < (int)size; i++)

{
printf("Value checked array[%d] = [%d]\n", i, array[i]);

if (array[i] == value)
{
return (i);
}
}
return (-1);
}
