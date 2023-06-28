#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Prints the value of the integer.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Prints the value of the integer in hexadecimal format.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Entry point of the program. Demonstrates the usage of the array_iterator function.
 * Creates an integer array and calls the array_iterator function twice with different print functions.
 * The array_iterator function iterates over each element of the array and executes the provided print function.
 * Returns 0 upon completion.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
