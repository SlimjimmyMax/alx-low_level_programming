#include "main.h"
#include <stdio.h>

int main(void)
{
    int result_islower = _islower('a');
    int result_isalpha = _isalpha('A');

    printf("_islower('a') = %d\n", result_islower);
    printf("_isalpha('A') = %d\n", result_isalpha);

    return 0;
}
