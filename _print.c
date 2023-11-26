#include "main.h"
/**
 * _printf - Produces output according to a format
 * @format: String
 * @...: Variadic arguments
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int c = 0, (*fun)(va_list);

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format != 'c' && *format != 's' && *format != '%')
			{
				c += _putchar('%');
				while (*format)
				{
					c += _putchar(*format);
					format++;
				}
				continue;
			}
			else
			{
				fun = get_f(format);
				c += fun(arg);
				format++;
				continue;
			}
		}
		else
		{
			c += _putchar(*format);
		}
		format++;
	}
	va_end(arg);
	return (c);
}
