#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *, ...);
int (*get_f(const char *format))(va_list);

int f_c(va_list arg);
int f_s(va_list arg);
int f_mod(va_list arg);
int _putchar(char c);

/**
 * struct get_functions - struct to get function of spec
 * @s: specifier
 * @f: function to use
 */

typedef struct get_functions
{
char s;
int (*f)(va_list);
} get;

#endif
