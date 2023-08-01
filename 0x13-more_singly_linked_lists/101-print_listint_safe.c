#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the beginning of the list.
 * Return: The number of nodes in the list, or -1 if a loop is detected.
 */
int print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		/* Check for a loop */
		if (slow == fast)
		{
			/* Move slow to the head and find the start of the loop */
			slow = head;
			while (1)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				count++;
				if (slow == fast)
					return (-1);
				slow = slow->next;
				fast = fast->next;
			}
		}
	}

	/* Print the remaining nodes (if any) and increment the count */
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}

	return (count);
}
