# 0x09-static_libraries

This repository contains programs and a static library written in the C programming language as part of the `0x09-static_libraries` project.

## Description
The `0x09-static_libraries` project focuses on creating and utilizing static libraries in C programming. A static library is a collection of pre-compiled object code files that can be linked with a program at compile time. Static libraries provide a way to reuse code across multiple programs and help in organizing and modularizing code.

## List of Files
- `holberton.h`: Header file containing function prototypes used in the programs and the static library.
- `holberton.c`: A source file that implements various functions defined in `holberton.h`.
- `create_static_lib.sh`: A shell script to create a static library named `liball.a` from the compiled object files.
- `libholberton.a`: A pre-compiled static library containing the object files of various functions defined in `holberton.h`.

## Usage
To compile a program with the static library, follow these steps:

1. Create the static library `liball.a` by running the `create_static_lib.sh` script:

   ```bash
   ./create_static_lib.sh
   ```

2. Use the following format to compile your program with the static library:

   ```bash
   gcc -Wall -Werror -Wextra -pedantic <filename.c> -L. -lall -o <output-file>
   ```

   Replace `<filename.c>` with the name of your C file, `<output-file>` with the desired name of the output file, and `-lall` with the library name (`-l` flag is used to link the library).

3. Run the compiled program:

   ```bash
   ./<output-file>
   ```

   Replace `<output-file>` with the name of the compiled program's output file.

## Example
Here's an example demonstrating how to compile a program (`program.c`) with the static library:

1. Create the static library `liball.a`:

   ```bash
   ./create_static_lib.sh
   ```

2. Compile the program:

   ```bash
   gcc -Wall -Werror -Wextra -pedantic program.c -L. -lall -o program
   ```

3. Run the compiled program:

   ```bash
   ./program
   ```

## Author
Created by [HAMMED AMUSAT ORIYOMI]


Feel free to explore the programs and the static library in this repository to understand how static libraries can be used in C programming. If you have any questions or need assistance, don't hesitate to reach out!

Contact: [mederhoo@gmail.com]
