#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s {
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function prototype to print all elements of a singly linked list */
size_t print_list(const list_t *h);

/* Function prototype to get the number of elements in a singly linked list */
size_t list_len(const list_t *h);

/* Function prototype to add a new node at the beginning of a singly linked list */
list_t *add_node(list_t **head, const char *str);

/* Function prototype to add a new node at the end of a singly linked list */
list_t *add_node_end(list_t **head, const char *str);

/* Function prototype to free the memory occupied by a singly linked list */
void free_list(list_t *head);

#endif /* LISTS_H */
