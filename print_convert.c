#include <stdarg.h>
#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
* print_unsigned - handle unsigned int
* @args: arg list
* Return: value number of printed chars
*/

int print_unsigned(va_list args)
{
unsigned int argument = va_arg(args, unsigned int);

return (print_unsigned_number(argument));
}
/**
* print_ptr - print adress
* @args: arg void
* Return: number of printed char
*/
int print_ptr(va_list args)
{
char *str;
int sum = 0;
unsigned long p = (unsigned long) va_arg(args, void*);

if (!p)
{
sum += _puts("(nil)", 0);
return (sum);
}
