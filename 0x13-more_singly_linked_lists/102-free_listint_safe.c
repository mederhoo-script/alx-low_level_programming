#include "lists.h"

/**
 * free_listp2 - Frees a linked list.
 * @head: Pointer to the head of a list.
 *
 * Description: This function frees a linked list by iterating through the list
 *              and releasing the memory occupied by each node. It sets the head
 *              of the list to NULL after freeing all nodes.
 *
 * Return: No return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - Frees a linked list and handles circular lists.
 * @h: Pointer to the head of a list.
 *
 * Description: This function frees a linked list, taking care of handling
 *              circular lists. It uses a helper linked list to keep track
 *              of the nodes that have been visited. If it encounters a node
 *              that has been visited before, it identifies it as a circular
 *              list and stops freeing the nodes to avoid an infinite loop.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
