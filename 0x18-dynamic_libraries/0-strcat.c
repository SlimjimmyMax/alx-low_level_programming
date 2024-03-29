#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string, where the result will be stored.
 * @src: Source string to be concatenated to @dest.
 *
 * Return: Pointer to the resulting concatenated string (@dest).
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
