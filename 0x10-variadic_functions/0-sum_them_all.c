#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that sums all its parameters.
 * @count: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */

int sum_them_all(int count, ...)
{
int s = 0;
int i;
va_list args;
va_start(args, count);
for (i = 0; i < count; i++)
{
int x = va_arg(args, int);
s += x;
}
va_end(args);
return (s);
}
