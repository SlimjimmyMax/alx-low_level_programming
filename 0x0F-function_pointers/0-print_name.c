#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - To print name
 * @name: Person's name
 * @f: Points to printing format
 *
 * Description: This function takes a name and a function pointer as input.
 * If the name and function pointer are not NULL, it calls the function
 * pointed to by f, passing the name as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
