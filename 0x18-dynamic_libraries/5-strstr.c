#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to be searched.
 * @needle: The substring to search for.
 *
 * Return:  @needle in @haystack,
 * or NULL if @needle is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
