#include "main.h"


/**
 * f_c - add a character to stdout
 *@arg: argument list
 *Return: 1
 */

int f_c(va_list arg)
{
	char f = va_arg(arg, int);

	return (_putchar(f));
}

/**
 * f_s - add string to stdout
 * @arg: arguments to print
 *
 * Return: byte count
 */

int f_s(va_list arg)
{
	int c = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		c++;
	}
	return (c);
}

/**
 * f_mod - print modulus
 * @arg: arguments to print
 *
 * Return: 1
 */

int f_mod(va_list arg)
{
	(void)arg;
	_putchar('%');
	return (1);
}

/**
 * _putchar - print character
 * @c: character
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
