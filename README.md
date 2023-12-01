#C - Printf

 _printf - Format and print data to standard output


SYNOPSIS

#include "main.h"
int _printf(const char *format, ...);


DESCRIPTION

The _printf function produces output to the standard output according to a
format string. The format string is composed of zero or more directives,
which are placeholders for various types of data.

The function returns the number of characters printed (excluding the null
byte used to end output to strings). On error, it returns -1.


FORMAT SPECIFIERS

The following format specifiers are supported:

%c      Print a single character.

%s      Print a null-terminated string.

%%      Print a percent sign.

%d, %i  Print an integer.


RETURN VALUE

Upon successful completion, the _printf function returns the number of
characters printed. On error, it returns -1.


EXAMPLES

The following examples illustrate the usage of _printf:

- Print a character:
_printf("%c\n", 'A');    // Output: A

- Print a string:
_printf("%s\n", "Hello, World!");    // Output: Hello, World!

- Print a percent sign:
_printf("%%\n");    // Output: %


ERROR HANDLING

If the format string is NULL, the function returns -1.


