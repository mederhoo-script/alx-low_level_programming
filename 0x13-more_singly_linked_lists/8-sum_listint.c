#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum
 * @head: Pointer
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
