**0x12-singly_linked_lists**

# Singly Linked Lists

This repository contains C code implementing a singly linked list data structure. Singly linked lists are dynamic data structures that store a collection of elements (nodes) connected through pointers, allowing efficient insertion and removal operations.

## Contents

- `lists.h`: Header file containing function prototypes and structure declarations.
- `0-print_list.c`: C function to print all elements of a singly linked list.
- `1-list_len.c`: C function to get the number of elements in a singly linked list.
- `2-add_node.c`: C function to add a new node at the beginning of a singly linked list.
- `3-add_node_end.c`: C function to add a new node at the end of a singly linked list.
- `4-free_list.c`: C function to free the memory occupied by a singly linked list.
- `README.md`: This file, providing an overview of the repository.

## How to Use

1. Clone the repository to your local machine:

```
git clone https://github.com/mederhoo-script/0x12-singly_linked_lists.git
```

2. Navigate to the project directory:

```
cd 0x12-singly_linked_lists
```

3. Compile the C files using your preferred C compiler:

```
gcc -Wall -Wextra -Werror -pedantic *.c -o linked_lists
```

4. Execute the program:

```
./linked_lists
```

## Example

```c
#include <stdio.h>
#include "lists.h"

int main(void)
{
    /* Create an empty linked list */
    list_t *my_list = NULL;

    /* Add nodes to the list */
    add_node(&my_list, "Hello");
    add_node(&my_list, "World");
    add_node_end(&my_list, "!");

    /* Print the list */
    print_list(my_list);

    /* Free the list */
    free_list(my_list);

    return (0);
}
```

## Contributing

Contributions to this project are welcome! If you find any issues or want to improve the code, feel free to create a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.