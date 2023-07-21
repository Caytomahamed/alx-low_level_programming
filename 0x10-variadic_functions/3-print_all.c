#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print char, integer, float and string
 * @format: format
 */
void print_all(const char *const format, ...)
{
	va_list list;
	unsigned int j = 0, start = 0;
	char *p;

	va_start(list, format);
	for (j = 0; format && format[j] != '\0'; j++)
	{
		print_specifier(format[j], list, &start);
	}

	printf("\n");
	va_end(list);
}
