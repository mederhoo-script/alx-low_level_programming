#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Double pointer to the beginning of the list.
 */
void free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
		*h = NULL;
	}
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the beginning of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast, *loop_start = NULL;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_start = head;
			while (loop_start != slow)
			{
				loop_start = loop_start->next;
				slow = slow->next;
			}

			printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);
			free_listint_safe(&loop_start);
			return (count);
		}
	}

	return (count);
}
