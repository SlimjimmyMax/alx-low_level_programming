/**
 * print_name - function to print name
 *
 * @name: unit print
 * @f: Return NULL
 *
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
