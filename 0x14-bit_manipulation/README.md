# 0x14-bit_manipulation README

## Overview

This repository contains C functions related to bit manipulation. The provided prototypes and descriptions are as follows:

## Prototypes:

```c
#ifndef __MAIN_H__
#define __MAIN_H__

/* Convert a binary string to an unsigned integer */
unsigned int binary_to_uint(const char *b);

/* Print the binary representation of an unsigned long int */
void print_binary(unsigned long int n);

/* Write a character to the standard output */
int _putchar(char c);

/* Get the value of a bit at a specific index */
int get_bit(unsigned long int n, unsigned int index);

/* Set a bit at a specific index to 1 */
int set_bit(unsigned long int *n, unsigned int index);

/* Set a bit at a specific index to 0 */
int clear_bit(unsigned long int *n, unsigned int index);

/* Calculate the number of bits needed to flip to transform n to m */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Check the endianness of the system */
int get_endianness(void);

#endif
```

## Function Descriptions:

1. `unsigned int binary_to_uint(const char *b)`: This function converts a binary string `b` to an unsigned integer.

2. `void print_binary(unsigned long int n)`: Print the binary representation of an unsigned long int `n`.

3. `int _putchar(char c)`: This function writes a character `c` to the standard output.

4. `int get_bit(unsigned long int n, unsigned int index)`: Get the value of the bit at a specific `index` in the unsigned long int `n`.

5. `int set_bit(unsigned long int *n, unsigned int index)`: Set the bit at a specific `index` to 1 in the unsigned long int `n`.

6. `int clear_bit(unsigned long int *n, unsigned int index)`: Set the bit at a specific `index` to 0 in the unsigned long int `n`.

7. `unsigned int flip_bits(unsigned long int n, unsigned long int m)`: Calculate the number of bits needed to flip in `n` to transform it into `m`.

8. `int get_endianness(void)`: Check the endianness of the system.

## How to Use:

To use these functions, include the `main.h` header file in your C code, which provides the function prototypes. Then, compile your code with the appropriate source files that implement these functions.

Feel free to contribute, report issues, or suggest improvements to this repository. Happy bit manipulation! 🧑‍💻1;2cc is fun
