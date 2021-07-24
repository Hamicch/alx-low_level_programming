#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: Pointer to the string to be printed between numbers
 * @n: Number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
        va_list params;

        va_start(params, n);

        for (i = 0; i < (n - 1); i++)
        {
                if (*separator == '\0')
                        printf("%d ", va_arg(params, int));
                else
                        printf("%d%s ", va_arg(params, int), *separator);
        }

        printf("%d\n", va_arg(params, int));

        va_end(params);
}
