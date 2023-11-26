#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Matches specifier and returns count
 * @format: Character string
 * @...: Variadic arguments
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, j;
	int char_count = 0;
	va_list ap;

	print_type argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{NULL, NULL}};

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			char_count += _write_char(format[i]);
			continue;
		}

		for (j = 0; argument[j].parameter; j++)
		{
			if (*argument[j].parameter == format[i + 1])
			{
				char_count += argument[j].f(ap);
				break;
			}
		}

		i++;

		if (!argument[j].parameter)
		{
			char_count += write(1, format, -1);
		}
	}

	va_end(ap);

	return (char_count);
}
