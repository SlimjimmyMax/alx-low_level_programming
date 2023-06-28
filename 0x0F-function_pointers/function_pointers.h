#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: Pointer to the function used for printing
 *
 * This function takes a name and a function pointer as parameters.
 * It calls the function pointed to by `f`, passing the name as an argument.
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to be processed
 * @size: The size of the array
 * @action: Pointer to the function to be executed
 *
 * This function takes an array, its size, and a function pointer as parameters.
 * It applies the function pointed to by `action` to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * This function writes the character `c` to the standard output (stdout).
 * It returns 1 on success and -1 on error.
 */
int _putchar(char c);

/**
 * int_index - Searches for an integer in an array
 * @array: The array to be searched
 * @size: The number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * This function searches for an integer in the array using the comparison function `cmp`.
 * It returns the index of the first element for which the comparison function does not return 0.
 * If no such element is found or if `size` is less than or equal to 0, it returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif

