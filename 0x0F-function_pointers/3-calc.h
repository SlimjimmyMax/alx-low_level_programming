#ifndef _3_CALC_H_
#define _3_CALC_H_

/**
 * struct op - Represents an operation
 * @op: The operator symbol
 * @f: Pointer to the function implementing the operation
 *
 * This structure defines an operation, which consists of an operator symbol
 * and a function pointer to the corresponding operation implementation.
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif

