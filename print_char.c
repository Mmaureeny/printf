#include "main.h"
#include <stdarg.h>
/**
 * print_char - prints a character
 * @args: list of variadic args
 * Return: always 1
 */
int print_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * print_string - prints a string
 * @args: list of variadic args
 *
 * Return: index
 */
int print_string(va_list args)
{
	char *arg = va_arg(args, char *);
int i;
	if (arg == NULL)
	{
		arg = "(null)";
	}
	for (i = 0; arg[i] != '\0'; i++)
	{
		_putchar(arg[i]);
	}
	return (i);
}
/**
 * print_percent - prints a percent
 * @args: list of variadic args
 *
 * Return: index
 */
int print_percent(va_list __attribute__((unused)) args)
{
	char percent = '%';

	_putchar(percent);

	return (1);
}
