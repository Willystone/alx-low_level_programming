#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strs;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
	{
			printf("(nil)");
	}
		else
	{
			printf("%s", str);
	}
		if (i !=(n - 1) && separator !=NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}

