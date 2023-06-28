#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
    int l = 0;
    int x = 0;

    // Calculate the length of the source string
    while (*(src + l) != '\0')
    {
        l++;
    }

    // Copy each character from the source string to the destination buffer
    for (; x < l; x++)
    {
        dest[x] = src[x];
    }

    // Add the null-terminating character at the end of the destination string
    dest[l] = '\0';

    return (dest);
}


