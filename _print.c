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
	int c = 0;

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);

			if (*format == 'c')
				c += _putchar(va_arg(arg, int));
			else if (*format == 's')
				format++;
				_puts(va_arg(arg, char *));
			if (*format == '%')
				c += _putchar('%');
			if (*format == '!')
			{
				format--;
				c += _putchar(*format);
				format++;
				c += _putchar(*format);
				format++;
				continue;
			}
			else
				c += _putchar('%');
		}
		else
			c += _putchar(*format);

		format++;
	}
	va_end(arg);
	return (c);
}
