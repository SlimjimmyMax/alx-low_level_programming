#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
    printf("Size of char: %ld byte\n", sizeof(char));
    printf("Size of short: %ld bytes\n", sizeof(short));
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of long: %ld bytes\n", sizeof(long));
    printf("Size of long long: %ld bytes\n", sizeof(long long));
    printf("Size of float: %ld bytes\n", sizeof(float));
    printf("Size of double: %ld bytes\n", sizeof(double));
    printf("Size of long double: %ld bytes\n", sizeof(long double));
    printf("Size of void pointer: %ld bytes\n", sizeof(void *));
    return 0;
}
