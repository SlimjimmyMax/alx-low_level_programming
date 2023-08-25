#include "main.h"

/**
 * _strcpy - terminate null byte,
 *           to the buffer pointed to by dest.
 * @dest: The buffer to copy the string into.
 * @src: The source string to copy.
 *
 * Return: Pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int m = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; m < l; m++)
	{
		dest[m] = src[m];
	}
	dest[l] = '\0';
	return (dest);
}
