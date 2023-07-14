#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory
 * @ptr: Pointer to the previously
 * @old_size: allocated space for ptr
 * @new_size: New size
 *
 * Return: Pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, size;
	char *src, *dest;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	size = old_size < new_size ? old_size : new_size;
	src = ptr;
	dest = new_ptr;

	for (i = 0; i < size; i++)
		dest[i] = src[i];

	free(ptr);

	return (new_ptr);
}
