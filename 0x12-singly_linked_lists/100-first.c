#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Constructor function executed before main.
 *        Prints a string to the console.
 */
void hare(void)
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}
