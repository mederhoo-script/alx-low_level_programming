#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		/* Save the next pointer before freeing the current node */
		temp = current->next;

		/* Set the current node's next to NULL to avoid issues with printing */
		current->next = NULL;

		/* Free the current node */
		free(current);

		/* Move to the next node */
		current = temp;

		/* If we encounter a node we've visited before, break the loop */
		if (current == *h)
		{
			/* Set head to NULL to indicate that the list is freed */
			*h = NULL;
			break;
		}
	}

	return (count);
}
