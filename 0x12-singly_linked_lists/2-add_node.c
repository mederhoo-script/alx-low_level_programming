#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a singly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be stored in the new node.
 *
 * Return: Address of the new node, or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	while (str[new_node->len] != '\0')
		new_node->len++;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}