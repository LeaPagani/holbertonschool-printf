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
			fun = get_f(format);
			if (fun == NULL)
			{
				if (*format == '\0')
					return (-1);
				c += _putchar('%');
			}
			else
			{
				c += fun(arg);
				format++;
				continue;
			}
		}
		else
			c += _putchar(*format);
		format++;
	}
	va_end(arg);
	return (c);
}
