#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * _write_char - writes a character to the standard output
 * @c: the character to write
 * Return: number of characters written
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_char - prints a character
 * @ap: va_list containing the character to print
 * Return: number of characters printed
 */
int _print_char(va_list ap)
{
	char c = va_arg(ap, int);

	return (_write_char(c));
}

/**
 * _print_string - prints a string
 * @ap: va_list containing the string to print
 * Return: number of characters printed
 */
int _print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += _write_char(*str);
		str++;
	}

	return (count);
}

/**
 * _print_percent - prints a percent character
 * @ap: va_list (unused)
 * Return: number of characters printed
 */
int _print_percent(va_list ap)
{
	(void)ap; /* unused */
	return (_write_char('%'));
}

/**
 * _putchar - writes a character to the standard output
 * @c: character to print
 * Return: On success, 1. On error, -1 and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * _puts - writes a string to the standard output
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
