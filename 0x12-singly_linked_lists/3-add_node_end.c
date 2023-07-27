#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Finds the length of a string.
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int length;  /* Variable to store the length of the string */

	for (length = 0; str[length]; length++)
		;

	return (length);
}

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the head of the list.
 * @str: String to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	return (new);
}
