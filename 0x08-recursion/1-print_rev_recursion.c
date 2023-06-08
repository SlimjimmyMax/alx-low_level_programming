#include <stdio.h>

void _print_rev_recursion(char *s);

int main(void)
{
    char str[] = "Hello, world!";
    _print_rev_recursion(str);
    return 0;
}

void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
        return;  // Base case: end of string
    }

    _print_rev_recursion(s + 1);  // Recursively call with next character
    putchar(*s);  // Print the current character after the recursive call
}
