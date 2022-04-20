#include "main.h"
#include <stdarg.h>

/**
*functions - function that select specifier
*@format: char pointer
*Return: pointer to the correction function
*/

int (*functions(const char *format))(va_list)
{
	int i;

	pr p[] = {
		{"c", print_char},

		{"s", print_str},

		{"i", print_int},

		{"d", print_int},

		{"%", print_perc},

		/*{"o", print_oct},*/

		/*{"x", print_hex},*/

		/*{"X", print_heX},*/

		{NULL, NULL}
	};

	for (i = 0; p[i].type != NULL; i++)
	{
		if (*format == *(p[i].type))
		{
			break;
		}
	}
	return (p[i].f);
}
