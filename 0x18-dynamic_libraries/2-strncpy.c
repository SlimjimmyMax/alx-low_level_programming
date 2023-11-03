#include "main.h"

/**
 * _strncpy - n= destination string.
 * @dest: Destination string where characters will be copied.
 * @src: Source string to be copied.
 * @n: Maximum number of characters to copy.
 *
 * Return: Pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
