#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string.
 *
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);

	if (*s != ' ' && *s != '\t' && *s != '\n')
		putchar(*s);
}

int main(void)
{
	char str[] = "Hello, world!";
	_print_rev_recursion(str);
	putchar('\n');
	return (0);
}
