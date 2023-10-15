#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - function that return lenght
 * @h: head parameter
 *
 * Return: size_t
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
const dlistint_t *temp;
temp = h;

while (temp != NULL)
{
temp = temp->next;
i++;

}
return (i);
}
