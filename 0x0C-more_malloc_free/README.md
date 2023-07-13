# 0x0C-more_malloc_free

This repository contains solutions to the tasks of the "0x0C-more_malloc_free" project. The project focuses on dynamic memory allocation using `malloc`, `free`, `calloc`, and `realloc` functions in the C programming language.

## Table of Contents

- [Description](#description)
- [Files](#files)
- [Usage](#usage)
- [Requirements](#requirements)
- [Credits](#credits)

## Description

The "0x0C-more_malloc_free" project explores the concepts and usage of dynamic memory allocation in C. It covers the following topics:

- Allocating memory using `malloc`
- Freeing allocated memory using `free`
- Allocating and zeroing memory using `calloc`
- Reallocating memory using `realloc`

The project contains various tasks, each focusing on different aspects of dynamic memory allocation.

## Files

The project consists of the following files:

- `0-malloc_checked.c`: Function that allocates memory using `malloc`. If the allocation fails, it causes normal process termination with a status value of `98`.
- `1-string_nconcat.c`: Function that concatenates two strings, up to a specified number of bytes from the second string.
- `2-calloc.c`: Function that allocates memory for an array using `calloc` and initializes the allocated memory to `0`.
- `3-array_range.c`: Function that creates an array of integers containing a range of values.
- `100-realloc.c`: Function that reallocates a memory block using `realloc`.
- `101-mul.c`: Program that multiplies two positive numbers and prints the result.

## Usage

To use the functions or test the programs in this project, follow these steps:

1. Clone the repository using the following command:

```bash
git clone https://github.com/your_username/0x0C-more_malloc_free.git
```

2. Navigate to the project directory:

```bash
cd 0x0C-more_malloc_free
```

3. Compile the desired file using your preferred C compiler. For example, to compile `0-malloc_checked.c`, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic 0-malloc_checked.c -o malloc_checked
```

4. Run the compiled program:

```bash
./malloc_checked
```

## Requirements

The code in this repository is written in C. To compile and run the code, make sure you have the following installed:

- GCC or any standard C compiler

## Credits

The "0x0C-more_malloc_free" project is part of the curriculum of the Holberton School, where the initial files and test cases were provided.
