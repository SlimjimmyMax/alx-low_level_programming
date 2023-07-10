#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there are invalid chars or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		decimal = decimal * 2 + (b[i] - '0');
		i++;
	}

	return (decimal);
}
