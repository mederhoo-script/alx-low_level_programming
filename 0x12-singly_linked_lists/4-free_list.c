#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Releases the memory allocated for a list_t linked list.
 * @head: A pointer to the first node of the list to free.
 */
void free_list(list_t *head)
{
	if (head)
	{
      /* Recursively free the rest of the list */
		free_list(head->next);

  /* Free the duplicated string (if it exists) */
		if (head->str)
			free(head->str);

	   /* Free the current node */
		free(head);
	}
}
