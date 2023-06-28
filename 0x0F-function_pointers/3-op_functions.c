#include "3-calc.h"

/**
 * op_add - Performs addition of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Returns: Sum of `a` and `b`.
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Performs subtraction of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Returns: Difference between `a` and `b`.
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Performs multiplication of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Returns: Product of `a` and `b`.
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Performs division of two integers
 * @a: Numerator
 * @b: Denominator
 *
 * Returns: Result of dividing `a` by `b`.
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - Performs modulus operation on two integers
 * @a: Dividend
 * @b: Divisor
 *
 * Returns: Remainder after dividing `a` by `b`.
 */
int op_mod(int a, int b)
{
    return (a % b);
}
