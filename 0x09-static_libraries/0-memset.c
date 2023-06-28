#include "main.h"

/**
 * _memset - Fills a block of memory with a specified value.
 * @s: Starting address of the memory block.
 * @b: Value to set the memory block to.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory block with the modified values.
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;

    for (; n > 0; i++)
    {
        s[i] = b;
        n--;
    }
    return (s);
}
