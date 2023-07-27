#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
	size_t length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
