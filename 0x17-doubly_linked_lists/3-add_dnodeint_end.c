#include "lists.h"

/**
 * add_dnodeint_end -  function that adds a new node to dlistint_t list.
 * @head: headw
 * @n: data passing
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
dlistint_t *new;
dlistint_t *temp;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
*head = new;
return (NULL);
}
temp = *head;
new->n = n;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
