#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory to be filled.
 * @b: The value to be set.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the filled memory area (@s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
