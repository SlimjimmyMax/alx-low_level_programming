#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("The size of a char is %lu bytes.\n", sizeof(char));
    printf("The size of an int is %lu bytes.\n", sizeof(int));
    printf("The size of a long int is %lu bytes.\n", sizeof(long int));
    printf("The size of a float is %lu bytes.\n", sizeof(float));
    printf("The size of a double is %lu bytes.\n", sizeof(double));

    return (0);
}
