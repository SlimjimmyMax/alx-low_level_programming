#include "main.h"

/**
 * _strchr - Searches for the first occurrence of character c in a string.
 * @s: Pointer to the string to be searched.
 * @c: Character to be searched in the string.
 *
 * Return: Pointer to the first occurrence of character c in the string.
 *         If the character is not found, returns NULL.
 */
char *_strchr(char *s, char c)
{
    int i = 0;

    for (; s[i] > '\0'; i++)
    {
        if (s[i] == c)
            return (&s[i]);
    }

    return (0);
}


