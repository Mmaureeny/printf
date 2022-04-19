#include <main.h>

/**
*_printf -produces output accoring to format
@format: string  containg characters and specifiers
*Returns: number of characters
*/
int _printf(const char *format, ...)
{
	va_list args;
	int(*f)(va_list);
	unsigned int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	if (args == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if ( format[i] == '%')
		{
			i++;
		
			if (format[i] == '\0')
			{
				return(-1);
			}

			while (format[i] == ' ')
				
				i++;

			f = functions(&format[i]);

			if (f == NULL)
			{
				_putchar('%');
				
				_putchar(fortmat[i]);
				
				count += 2;
			}
			else
			count += f(args);
		}
		else
		{
			_putchar(format[i]);
			
			count++;
		}
	}
	va_end(args);
	return (count);
}
