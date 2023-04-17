#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: s1, s2 or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, k, l, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;

	m = i + j;
	p = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (p == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (l = 0; l < j; l++, k++)
		p[k] = s2[l];
	p[m] = '\0';

	return (p);
}
