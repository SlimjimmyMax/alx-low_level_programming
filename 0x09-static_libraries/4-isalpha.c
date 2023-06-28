#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is an alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return (1);
    else
        return (0);
}


