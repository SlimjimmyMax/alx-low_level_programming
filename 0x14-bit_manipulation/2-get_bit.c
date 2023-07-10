#include "main.h"
#include <stddef.h>
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Unsigned long integer.
 * @index: Index of the bit to retrieve.
 *
 * Return: Value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
