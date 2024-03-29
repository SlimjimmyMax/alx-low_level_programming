#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string whose length is to be calculated.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
