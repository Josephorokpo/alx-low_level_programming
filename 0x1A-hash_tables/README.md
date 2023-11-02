0x1A. C - Hash tables
***ALX Software Engineering Project***

#Project Description
A hash table is a data structure that allows efficient data retrieval. This project provides a basic implementation of a hash table and explores advanced concepts such as sorted hash tables. The key components include:

Basic Hash Table: Implements the creation, adding, retrieving, and deleting of key-value pairs in a hash table.

Sorted Hash Table (Advanced): Demonstrates a sorted hash table with key-value pairs sorted by key.

#Learning Objectives
This projec focuses on the following concepts:

What is a hash function
What makes a good hash function
How hash tables work and how to use them
Handling collisions in a hash table
The advantages and drawbacks of using hash tables
Common use cases for hash tables

#Requirements
Allowed editors: vi, vim, emacs
All code should be written in C
Compiled on Ubuntu 20.04 LTS using gcc with the options: -Wall -Werror -Wextra -pedantic -std=gnu89
The prototypes of all functions should be included in the hash_tables.h header file
Code should follow the Betty style

#Tasks, Files and Functions
The project includes the following files and functions:

0-hash_table_create.c

hash_table_t *hash_table_create(unsigned long int size);
Creates a hash table of a given size and returns a pointer to it.

1-djb2.c

unsigned long int hash_djb2(const unsigned char *str);
Implements the djb2 hash function to calculate a hash value for a string.

2-key_index.c

unsigned long int key_index(const unsigned char *key, unsigned long int size);
Returns the index where a key-value pair should be stored in the array of the hash table.

3-hash_table_set.c

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
Adds an element to the hash table or updates an existing element.

4-hash_table_get.c

char *hash_table_get(const hash_table_t *ht, const char *key);
Retrieves the value associated with a key in the hash table.

5-hash_table_print.c

void hash_table_print(const hash_table_t *ht);
Prints the hash table.

6-hash_table_delete.c

void hash_table_delete(hash_table_t *ht);
Deletes a hash table and frees the memory.

7-100-sorted_hash_table.c (Advanced)

shash_table_t *shash_table_create(unsigned long int size);

Creates a sorted hash table.

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

Adds or updates an element in the sorted hash table.

char *shash_table_get(const shash_table_t *ht, const char *key);

Retrieves the value associated with a key in the sorted hash table.

void shash_table_print(const shash_table_t *ht);

Prints the sorted hash table in ascending order.

void shash_table_print_rev(const shash_table_t *ht);

Prints the sorted hash table in reverse order.

void shash_table_delete(shash_table_t *ht);

Deletes the sorted hash table and frees the memory.
