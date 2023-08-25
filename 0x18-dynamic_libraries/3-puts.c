#include "main.h"

/**
 * _puts - Outputs a string followed by a newline character.
 * @str: The string to be output.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
