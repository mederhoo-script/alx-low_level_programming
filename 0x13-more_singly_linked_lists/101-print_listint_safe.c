#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		/* Move to the next node */
		current = current->next;

		/* If we encounter a node we've visited before, break the loop */
		if (current == head)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
