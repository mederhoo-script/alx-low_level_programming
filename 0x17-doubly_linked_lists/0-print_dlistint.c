#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - function that print all data
 * @h: head parameter
 *
 * Return: size_t
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
const dlistint_t *temp;
temp = h;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
i++;

}
return (i);
}
