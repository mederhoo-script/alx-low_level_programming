#include "lists.h"

/**
 * add_dnodeint - function that add node to the list
 *
 * @head: pointer to the pointer
 * @n: data
 * Return: nothing
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
dprintf(2, "error");
exit(0);
}

new->n = n;
if (*head != NULL)
{
(*head)->prev = new;
}
new->next = *head;
*head = new;
return (new);
}
