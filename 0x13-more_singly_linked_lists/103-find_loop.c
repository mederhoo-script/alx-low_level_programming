#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = head->next->next;

	while (hare && hare->next)
	{
		if (tortoise == hare)
		{
			/* Reset one of the pointers and start from the head */
			tortoise = head;

			/* Move both pointers at the same pace until they meet again */
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			/* Return the address of the node where the loop starts */
			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = hare->next->next;
	}

	/* If no loop is found, return NULL */
	return (NULL);
}
