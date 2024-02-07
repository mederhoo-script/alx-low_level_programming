#include "search_algos.h"

/**
 * binary_search- binary searching
 * @array: list to search.
 * @size: size of arry
 * @value: value to search
 * Return: int
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		int i;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			{
				printf(", ");
				}
}
printf("\n");

		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);

}
