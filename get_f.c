#include "main.h"
/**
 * get_f - gets appropiate function for _printf
 * @format: string specifier
 * Return: positiong of function
 */

int (*get_f(const char *format))(va_list)
{
	int i = 0;

	get f_arr[] = {
		{'c', f_c},
		{'s', f_s},
		{'%', f_mod},
		{'i', f_int},
		{'d', f_int},
		{0, NULL}
	};

	while (f_arr[i].s)
	{
		if (f_arr[i].s == *format)
			break;

		i++;
	}
return (f_arr[i].f);
}
