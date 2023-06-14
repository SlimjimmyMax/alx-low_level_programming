#include "main.h"

/**
 * Main - check the code
 *return 1 if c is uppercase
 *
 *
 * return 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
