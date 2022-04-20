#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


int _printf(const char *format, ...);
char *print_bin(va_list list);
=======
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

/*macros*/
#define KILOBYTE 1024
#define FLUSH -1

int _printf(const char *format, ...);
int (*functions(const char *format))(va_list);
int _putchar(char c);
int _puts(char *str);
int print_char(va_list args);
int print_str(va_list args);
int print_perc(va_list args);
int print_int(va_list args);

int print_hex(va_list args);
int print_heX(va_list agrs);
int print_HEX(unsigned long int n);
int print_oct(va_list args);

/*helper functions*/
int count_digit(int i);
void print_number(int n);

/**
*struct prnt -structure printer
*@type: the type
*@f: the function associated
*/
typedef struct prnt
{
	char *type;
	int(*f)(va_list);
}pr;
#endif
