Certainly! Here's the updated README file with your name and contact information:

# 0x0A-argc_argv

This repository contains programs written in the C programming language as part of the `0x0A-argc_argv` project.

## Description
The `0x0A-argc_argv` project focuses on understanding and utilizing the command-line arguments passed to a C program through the `main` function. The programs in this repository demonstrate various aspects related to `argc` (argument count) and `argv` (argument vector) and provide examples of how to handle command-line arguments in different scenarios.

## List of Files
- `0-whatsmyname.c`: A program that prints its own name.
- `1-args.c`: A program that prints the number of arguments passed to it.
- `2-args.c`: A program that prints all arguments it receives.
- `3-mul.c`: A program that multiplies two numbers passed as arguments.
- `4-add.c`: A program that adds positive numbers passed as arguments.
- `100-change.c`: A program that prints the minimum number of coins to make change for a given amount.

## Usage
To compile any of the C programs in this repository, use the following format:

```
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output-file>
```

Replace `<filename.c>` with the name of the C file you want to compile and `<output-file>` with the desired name of the output file.

To run a compiled program, use the following format:

```
./<output-file> <arguments>
```

Replace `<output-file>` with the name of the compiled program's output file and `<arguments>` with the desired command-line arguments.

## Examples
Here are a few examples demonstrating how to compile and run the programs in this repository:

1. To compile `0-whatsmyname.c`:

   ```
   gcc -Wall -Werror -Wextra -pedantic 0-whatsmyname.c -o whatsmyname
   ```

   To run the compiled program:

   ```
   ./whatsmyname
   ```

2. To compile `1-args.c`:

   ```
   gcc -Wall -Werror -Wextra -pedantic 1-args.c -o args
   ```

   To run the compiled program:

   ```
   ./args Hello World!
   ```

3. To compile `2-args.c`:

   ```
   gcc -Wall -Werror -Wextra -pedantic 2-args.c -o allargs
   ```

   To run the compiled program:

   ```
   ./allargs Hello World!
   ```

## Author
Created by HAMMED AMUSAT ORIYOMI

Contact: mederhoo@gmail.com

Feel free to explore the programs in this repository to understand how command-line work
