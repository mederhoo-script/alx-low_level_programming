# 0x13-more_singly_linked_lists

## Description

0x13-more_singly_linked_lists is a project that explores more concepts related to singly linked lists in the C programming language. It involves creating and manipulating singly linked lists, as well as writing functions to perform various operations on these linked lists.

## Files

The project consists of the following files:

1. **lists.h:** This header file contains the definition of the `listint_t` structure and function prototypes for the various functions used in the project.

2. **0-print_listint.c:** This file contains the implementation of the `print_listint` function, which prints all the elements of a `listint_t` linked list and returns the number of nodes in the list.

3. **1-listint_len.c:** This file contains the implementation of the `listint_len` function, which returns the number of elements in a `listint_t` linked list.

4. **2-add_nodeint.c:** This file contains the implementation of the `add_nodeint` function, which adds a new node at the beginning of a `listint_t` linked list.

5. **3-add_nodeint_end.c:** This file contains the implementation of the `add_nodeint_end` function, which adds a new node at the end of a `listint_t` linked list.

6. **4-free_listint.c:** This file contains the implementation of the `free_listint` function, which frees the memory allocated for a `listint_t` linked list.

7. **5-free_listint2.c:** This file contains the implementation of the `free_listint2` function, which frees the memory allocated for a `listint_t` linked list and sets the head pointer to `NULL`.

8. **6-pop_listint.c:** This file contains the implementation of the `pop_listint` function, which deletes the head node of a `listint_t` linked list and returns its data.

9. **7-get_nodeint.c:** This file contains the implementation of the `get_nodeint` function, which returns the nth node of a `listint_t` linked list.

10. **8-sum_listint.c:** This file contains the implementation of the `sum_listint` function, which returns the sum of all the data (integers) in a `listint_t` linked list.

11. **9-insert_nodeint.c:** This file contains the implementation of the `insert_nodeint` function, which inserts a new node at a given position in a `listint_t` linked list.

12. **10-delete_nodeint.c:** This file contains the implementation of the `delete_nodeint` function, which deletes a node at a given position in a `listint_t` linked list.

13. **100-reverse_listint.c:** This file contains the implementation of the `reverse_listint` function, which reverses a `listint_t` linked list.

14. **101-print_listint_safe.c:** This file contains the implementation of the `print_listint_safe` function, which prints a `listint_t` linked list, even if it contains a loop.

15. **102-free_listint_safe.c:** This file contains the implementation of the `free_listint_safe` function, which frees a `listint_t` linked list, even if it contains a loop.

16. **103-find_loop.c:** This file contains the implementation of the `find_loop` function, which finds the loop in a `listint_t` linked list and returns the node where the loop starts.

## Usage

To use the functions provided in this project, include the `lists.h` header file in your C program and compile your code with the appropriate source files. For example:

```c
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;

    head = add_nodeint(&head, 10);
    head = add_nodeint(&head, 20);
    head = add_nodeint(&head, 30);

    printf("List elements:\n");
    print_listint(head);

    printf("List length: %d\n", listint_len(head));

    // Free the linked list
    free_listint(head);

    return 0;
}
```

This is just a simple example to demonstrate the usage of the provided functions. Depending on the specific task or problem you are working on, you may use different combinations of the functions to manipulate singly linked lists in your C programs.

## Author

This project is authored by [hammed amusat alxse student].