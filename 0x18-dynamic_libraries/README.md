# 0x18. C - Dynamic libraries
***ALX Software Engineering Programme Tasks***

## Learning Objectives

- Understand what dynamic libraries are, how they work, and how to create and use them.
- Learn about the environment variable `$LD_LIBRARY_PATH` and how to use it.
- Differentiate between static and shared libraries.
- Explore basic usage of `nm`, `ldd`, and `ldconfig`.

## General Requirements

- All code is written in C.
- Allowed editors: vi, vim, emacs.
- All files should end with a new line.
- You must create a `README.md` file in the project directory.
- Your code should use the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`.
- Do not use global variables.
- No more than 5 functions per file.
- You are not allowed to use the standard library. Functions like `printf`, `puts`, etc., are forbidden.
- You are allowed to use `_putchar`.
- Do not push `_putchar.c` to the repository.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`. Don't forget to push your header file.

## Tasks

### 0. A library is not a luxury but one of the necessities of life

Create the dynamic library `libdynamic.so` containing the following functions:

- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle)

If you haven’t coded all of the above functions, create empty ones with the right prototype.

### 1. Without libraries what have we? We have no past and no future

Create a script `1-create_dynamic_lib.sh` that creates a dynamic library called `liball.so` from all the `.c` files in the current directory.

### 2. Let's call C functions from Python (Advanced)

Create a dynamic library `100-operations.so` that contains C functions to be called from Python. See the example for more detail.

### 3. Code injection: Win the Giga Millions! (Advanced)

This task involves a challenge where you need to create a shell script `101-make_me_win.sh` that will be used to run two commands on the same server, injecting code to make someone win the Giga Millions lottery. 

