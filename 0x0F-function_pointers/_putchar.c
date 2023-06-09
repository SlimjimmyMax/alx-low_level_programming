#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be printed
 *
 * Return: On success, returns 1.
 * On error, returns -1 and sets errno.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
