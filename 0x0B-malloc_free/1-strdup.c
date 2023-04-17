#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter
 * @str: string
 * Return: NULL or pointer to str
 */

char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc(i * sizeof(*p) + 1);

	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
}
