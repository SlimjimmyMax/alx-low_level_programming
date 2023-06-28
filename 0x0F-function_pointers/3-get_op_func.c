#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Retrieves the function pointer for the specified operator
 * @s: The operator symbol
 *
 * Return: Function pointer corresponding to the operator, or NULL if not found.
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    int i = 0;

    while (ops[i].op != NULL)
    {
        if (*(ops[i].op) == *s && s[1] == '\0')
            return (ops[i].f);

        i++;
    }

    return (NULL);
}

