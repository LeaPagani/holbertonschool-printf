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
 * f_int - print int
 * @arg: arguments to print
 * Return: number of digits
 */

int f_int(va_list arg)
{
	int c = 0, n = va_arg(arg, int);
	unsigned int u;

	if (n < 0)
	{
		c += _putchar('-');
		u = -n;
	}
	else
		u = n;
	c += f_recursion(u);
	return (c);
}

/**
 * f_recursion - recursion to print all digits of a num
 * @u: unisgned int
 *
 * Return: number of digits
 */
int f_recursion(unsigned int u)
{
	int c = 0;

	if (u / 10)
		c += f_recursion(u / 10);
	c += _putchar((u % 10) + '0');
	return (c);
}
#include "main.h"
/**
 * _putchar - print character
 * @c: character
 * Return: 1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
