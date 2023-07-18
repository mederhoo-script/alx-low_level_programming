# 0x0E-structures_typedef

This repository contains C programs that demonstrate the use of structures and typedef in C programming.

## Table of Contents

- [Description](#description)
- [Requirements](#requirements)
- [List of Programs](#list-of-programs)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Description

In C programming, structures allow us to create user-defined data types that can hold multiple data elements of different types. The `typedef` keyword provides a way to create aliases for existing data types, making the code more readable and maintainable.

This repository includes several C programs that showcase the use of structures and typedef to solve different problems and implement data structures.

## Requirements

To compile and run the programs in this repository, you need:

- A C compiler (e.g., GCC)
- Standard C library (stdlib.h, stdio.h, etc.)

## List of Programs

1. **`01-define-struct.c`:** Demonstrates the creation of a structure to represent a book's information, such as title, author, and price.

2. **`02-access-struct.c`:** Illustrates how to access and modify the members of a structure.

3. **`03-nested-struct.c`:** Shows the use of nested structures to represent complex data.

4. **`04-typedef.c`:** Introduces the `typedef` keyword to create aliases for data types, making code more readable.

5. **`05-typedef-struct.c`:** Combines structures and typedef to create a new user-defined data type.

6. **`06-struct-as-parameters.c`:** Demonstrates passing structures as function parameters to manipulate data.

7. **`07-typedef-func-pointer.c`:** Uses `typedef` to create aliases for function pointers, simplifying code readability.

## Usage

To compile and run any of the programs, use a C compiler like GCC:

```bash
gcc -Wall -Wextra -pedantic -o program_name program_name.c
./program_name
```

Replace `program_name` with the name of the C file you want to compile and run.

## Contributing

Contributions to this repository are welcome! If you find any issues or want to add more C programs demonstrating structures and typedef, feel free to submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
