# Variadic Functions in C - README

## Overview

This repository contains C programs that demonstrate the use of variadic functions. Variadic functions are functions that can take a variable number of arguments. The `<stdarg.h>` header in C provides macros that allow us to work with variable arguments. This repository explores how to create and use variadic functions to perform various tasks efficiently.

## List of Programs

1. **0-sum_them_all.c**: This program defines a variadic function `sum_them_all` that calculates the sum of a variable number of integers passed as arguments.

2. **1-print_numbers.c**: This program defines a variadic function `print_numbers` that prints a variable number of integers passed as arguments.

3. **2-print_strings.c**: This program defines a variadic function `print_strings` that prints a variable number of strings passed as arguments.

4. **3-print_all.c**: This program defines a variadic function `print_all` that prints any combination of integers, floats, characters, and strings passed as arguments.

## How to Use

1. Clone the repository to your local machine using the following command:
   ```
   git clone https://github.com/your_username/0x10-variadic_functions.git
   ```

2. Compile the C programs using your preferred C compiler (e.g., gcc):
   ```
   gcc -Wall -Werror -Wextra -pedantic -o program_name c_program.c
   ```

3. Run the compiled program:
   ```
   ./program_name
   ```

## Example Usage

### Example 1: Summing Integers

```c
#include "variadic_functions.h"

int main(void)
{
    int sum;

    sum = sum_them_all(4, 10, 20, 30, 40);
    printf("Sum: %d\n", sum);

    return (0);
}
```

Output:
```
Sum: 100
```

### Example 2: Printing Numbers and Strings

```c
#include "variadic_functions.h"

int main(void)
{
    print_numbers(4, 10, 20, 30, 40);
    printf("\n");
    print_strings(3, "Hello", "World", "!");
    printf("\n");

    return (0);
}
```

Output:
```
10, 20, 30, 40
Hello, World, !
```

### Example 3: Printing Any Combination

```c
#include "variadic_functions.h"

int main(void)
{
    print_all("c", 'H', 98, "Hello");

    return (0);
}
```

Output:
```
c: Hello
```

## Credits

The C programs in this repository were written by [Hammed Amusat Oriyomi]. Feel free to use and modify them as needed. If you have any questions or suggestions, please don't hesitate to reach out.

Happy coding! 🚀