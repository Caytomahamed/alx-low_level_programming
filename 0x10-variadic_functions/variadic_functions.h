#ifndef VARIADIC_FUNCTIONS_HEADER
#define VARIADIC_FUNCTIONS_HEADER

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

/**
 * struct p - checker struct
 * @p: possibility
 * @f: Function to be used
 */
typedef struct p
{
	char *p;
	void (*f)(va_list);
} checker;

void print_c(va_list);
void print_i(va_list);
void print_f(va_list);
void print_s(va_list);

/**
 * print_specifier - prints the corresponding argument
 * for a given format specifier
 * @spec: the format specifier
 * @list: the va_list of arguments
 * @start: a pointer to an unsigned int that keeps
 * track of whether this is the first
 * specifier being printed
 *
 * Return: void
 */
void print_specifier(const char spec, va_list list, unsigned int *start)
{
	switch (spec)
	{
	case 'c':
		switch (*start)
		{
		case 1:
			printf(", ");
		}
		*start = 1;
		printf("%c", va_arg(list, int));
		break;
	case 'i':
		switch (*start)
		{
		case 1:
			printf(", ");
		}
		*start = 1;
		printf("%i", va_arg(list, int));
		break;
	case 'f':
		switch (*start)
		{
		case 1:
			printf(", ");
		}
		*start = 1;
		printf("%f", va_arg(list, double));
		break;
	case 's':
		switch (*start)
		{
		case 1:
			printf(", ");
		}
		*start = 1;
		char *p;

		p = va_arg(list, char *);

		if (p)
		{
			printf("%s", p);
		}
		else
		{
			printf("%p", p);
		}
		break;
	}
}

#endif
