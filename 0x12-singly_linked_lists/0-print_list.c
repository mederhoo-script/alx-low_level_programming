#include "lists.h"

/**
 * print_list - Prints all elements of a singly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
		count++;
	}
	return (count);
}