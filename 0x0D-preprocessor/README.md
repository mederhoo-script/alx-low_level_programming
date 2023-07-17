# 0x0D-preprocessor

This repository contains C programs that demonstrate the usage of the preprocessor in C programming.

## What is the Preprocessor?

In C programming, the preprocessor is a tool that performs preprocessing tasks before the actual compilation of the code. It is a crucial part of the compilation process and helps in manipulating the source code before it gets compiled into machine code.

## Programs

The repository contains the following programs:

1. **1-main.c**: A program that prints the name of the source file using the `__FILE__` macro.

2. **2-main.c**: A program that prints the line number of the current line using the `__LINE__` macro.

3. **3-function_like_macro.h**: A header file that defines a function-like macro `ABS(x)` to compute the absolute value of a number.

4. **4-sum.h**: A header file that defines a function-like macro `SUM(x, y)` to compute the sum of two numbers.

5. **101-preprocessor_abuse.c**: A program that demonstrates the use of the preprocessor to create a statement that prints "Hello, Holberton" 32 times.

## How to Use

To compile and run the programs, follow these steps:

1. Clone the repository: `git clone https://github.com/mederhoo-script/0x0D-preprocessor.git`
2. Change the directory to the repository: `cd 0x0D-preprocessor`
3. Compile the C programs using a C compiler: `gcc -o output_file program_name.c`
4. Run the compiled program: `./output_file`

## Requirements

To compile and run the programs, you need a C compiler (GCC recommended) installed on your system.

## Author

This repository is authored by [Your Name](https://github.com/mederhoo-script).

Feel free to explore the programs and learn more about C preprocessor concepts!