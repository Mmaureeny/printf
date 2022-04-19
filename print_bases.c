#include "main.h"
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * print_hex - Function that prints hexadecimal numbers.
 * @args: Arguments that the function receives.
 * Return: len.
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int a[1024];
	int i = 0, temp = 0;
	char p;

	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 0; n > 0; i++, temp++)
	{
		a[temp] = n % 16;
		n = n / 16;
		if (a[temp] > 10)
			a[i] = a[temp] + 39;
		else
			a[i] = a[temp];
	}
	for (i = temp - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (temp);
}
/**
  * print_heX - Function that printsin hexadecimal form in uppercase.
  * @args: Arguments that the function receives.
  * Return: temp.
  */
int print_heX(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int a[1024], i = 0, temp = 0;
	char p;

	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 0; n > 0; i++)
	{
		a[temp] = n % 16;
		n = n / 16;
		if (a[i] > 10)
			a[i] = a[temp] + 7;
		else
		{
			a[i] = a[temp];
		}
		temp++;
	}
	for (i = temp - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (temp);
}
/**
 * print_add - Function that adds a memory direction.
 * @args: Arguments that the function receives.
 * Return: len.
 */
int print_add(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);
	int len = 0;

	_putchar('0');
	_putchar('x');
	len += print_HEX(n);
	len = len + 2;
	return (len);
}

/**
 * print_HEX - Function that prints in hexadecimal form in lowercase.
 * @n: unsigned ling int.
 * Return: temp.
 */
int print_HEX(unsigned long int n)
{
	unsigned int a[1024];
	int i = 0, temp = 0;
	char p;

	if (n < 1)
	{
		write(1, "0", 1);
		return (1);
	}
	for (i = 0; n > 0; i++, temp++)
	{
		a[temp] = n % 16;
		n = n / 16;
		if (a[temp] > 10)
			a[i] = a[temp] + 39;
		else
			a[i] = a[temp];
	}
	for (i = temp - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		_putchar(p);
	}
	return (temp);
}

/**
 * print_oct - pintf octal numbers.
 * @arguments_list: arguments.
 * Return: amount n prints
 */
int print_oct(va_list args)
{
	unsigned int n, i;
	int j;
	int octalNum[1024];

	n = va_arg(args, int);
	i = 0;
	while (n != 0)
	{
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(octalNum[j] + '0');
	return (i - 2);
}
