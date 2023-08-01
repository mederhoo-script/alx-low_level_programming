#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_loop - Helper function to find a loop in a linked list
 * @head: Pointer to the head of the linked list
 * Return: Pointer to the node causing the loop, or NULL if no loop
 */
listint_t *find_loop(const listint_t *head)
{
	listint_t *slow, *fast;

	slow = (listint_t *)head;
	fast = (listint_t *)head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = (listint_t *)head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}

/**
 * print_listint_safe - Prints a listint_t linked list with loop handling
 * @head: Pointer to the head of the linked list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *loop_node = find_loop(head);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		if (head == loop_node)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		head = head->next;
	}

	return (count);
}
