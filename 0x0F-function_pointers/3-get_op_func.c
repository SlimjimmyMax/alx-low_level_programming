#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Chooses the right function for the operation
 * @s: Represents the operator chosen
 *
 * This function takes a string representing an operator and returns a pointer to the corresponding function
 * that performs the operation.
 *
 * Returns: Pointer to the function related to the operator, or NULL if the operator is not supported.
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

    int e_l = 0;

    while (ops[e_l].op != NULL)
    {
        if (*(ops[e_l].op) == *s && s[1] == '\0')
            return (ops[e_l].f);

        e_l++;
    }

    return (NULL);
}
