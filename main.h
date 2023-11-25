#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct print
{
	char *parameter;
	int (*f)(va_list ap);
} print_type;

/* Function prototypes */
int _write_char(char c);
int _print_char(va_list ap);
int _print_string(va_list ap);
int _print_percent(va_list ap);
int _printf(const char *format, ...);

#endif /* MAIN_H */
