#ifndef MAIN_H
#define MAIN_H

/* The libraries that we'll need */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specifiers - A specifier struct.
 *
 * @specifier: A character to indicate which specifier this is.
 * @f: Pointer to a it's respective print function.
 */
typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list args);
} spec_t;

/* Our printers */
int _putchar(char c);
int _puts(char *s);

/* c-s-i-d_printers.c modules */
int _print_char(va_list args);
int _print_string(va_list args);
int _print_int(va_list args);
void _integer_recursion(int integer);

/* b-u_printers.c modules */
int _print_binary(va_list args);
long recursion_binary(long b);
void _long_recursion(long binary);
int _print_unsigned(va_list args);
void _unsigned_recursion(int integer);

/* o_printers.c modules */
int _print_octal(va_list args);
void _octal_recursion(int integer);

/* x-X_printers.c modules */
int _print_hex(va_list args);
int _print_HEX(va_list args);
void _hex_recursion(int integer);
void _HEX_recursion(int integer);

/* print_format.c module */
/* The function that'll determine which specifer to print */
int _print_format(const char *format, va_list args);
int isValidSpecifier(char type);
int _print_specifier(char format, va_list args);

/* The _printf function */
int _printf(const char *format, ...);

#endif
