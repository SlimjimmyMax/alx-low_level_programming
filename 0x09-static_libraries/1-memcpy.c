#include "main.h"

/**
 * _memcpy - Copies a memory area from source src to destination dest.
 * @dest: Pointer to the memory where the data will be copied.
 * @src: Pointer to the memory from where the data will be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory block (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int r = 0;
    int i = n;

    for (; r < i; r++)
    {
        dest[r] = src[r];
        n--;
    }

    return (dest);
}
