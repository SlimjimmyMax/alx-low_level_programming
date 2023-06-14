#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * return on success 1
 * on error return -1 errno set appropriately.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
