# 0x14. C - Bit Manipulation
***ALX Software Engineering Programme Task***

## Description

This repository contains solutions to tasks related to bit manipulation in the C programming language. The project includes functions that perform various operations on bits using bitwise operators.

## Learning Objectives

By completing this project, you will be able to:

- Look for the right sources of information without excessive assistance.
- Manipulate bits and effectively use bitwise operators.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with options -Wall -Werror -Wextra -pedantic -std=gnu89.
- Files should end with a new line.
- A `README.md` file at the root of the folder is mandatory.
- Code should adhere to the Betty style.
- Global variables are not allowed.
- Maximum of 5 functions per file.
- Only C standard library functions allowed: malloc, free, and exit. Use of functions like printf, puts, etc., is forbidden.
- The prototypes of all functions and `_putchar` should be included in the `main.h` header file.
- Pushing `_putchar.c` is not required.
- All header files should be include guarded.

## Tasks

0. 0

Write a function that converts a binary number to an unsigned int.

- Prototype: unsigned int binary_to_uint(const char *b);
- where b is pointing to a string of 0 and 1 chars
- Return: the converted number, or 0 if
 - there is one or more chars in the string b that is not 0 or 1
 - b is NULL

1. 1

Write a function that prints the binary representation of a number.

- Prototype: void print_binary(unsigned long int n);
- Format: see example
- You are not allowed to use arrays
- You are not allowed to use malloc
- You are not allowed to use the % or / operators

2. 10

Write a function that returns the value of a bit at a given index.

- Prototype: int get_bit(unsigned long int n, unsigned int index);
- where index is the index, starting from 0 of the bit you want to get
- Returns: the value of the bit at index index or -1 if an error occured

3. 11

Write a function that sets the value of a bit to 1 at a given index.

- Prototype: int set_bit(unsigned long int *n, unsigned int index);
- where index is the index, starting from 0 of the bit you want to set
- Returns: 1 if it worked, or -1 if an error occurred

4. 100

Write a function that sets the value of a bit to 0 at a given index.

- Prototype: int clear_bit(unsigned long int *n, unsigned int index);
- where index is the index, starting from 0 of the bit you want to set
- Returns: 1 if it worked, or -1 if an error occurred

5. 101

Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
- You are not allowed to use the % or / operators

6. Endianness

Write a function that checks the endianness.

- Prototype: int get_endianness(void);
- Returns: 0 if big endian, 1 if little endian

7. Crackme3

Find the password for this program.

- Save the password in the file 101-password
- Your file should contain the exact password, no new line, no extra space

## Author
This project is authored by Julien Barbier.

## License
This project is licensed under the terms of the MIT license.
