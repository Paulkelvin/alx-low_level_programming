#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - writes the character n to stdout
 * @n: element of the sum
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum = 0;

va_start(ap, n);
if (n == 0)
	{
	return (0);
	}
	for (i = 0; i < n; i++)
		{
		sum += va_arg(ap, int);
		}
va_end(ap);
return (sum);
}
