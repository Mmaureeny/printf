#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/*macros*/
#define KILOBYTE 1024
#define FLUSH -1

int _printf(const char *format, ...);
int print_unsigned(va_list ap);
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

/**
*struct prnt -structure printer
*@type: the type
*@f: the function associated
*/
typedef struct prnt
{
<<<<<<< HEAD
char type;
int (*f)(va_list);
} pr;
=======
	char *type;
	int(*f)(va_list);
}pr;
>>>>>>> 481acf51cb0ef47413162060bf5340fcfae79587

>>>>>>> 3ccff2a82000ec17b4cc78d1e94eae7bbb67ccf8
#endif
