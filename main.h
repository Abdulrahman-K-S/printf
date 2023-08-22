#ifndef MAIN_H
#define MAIN_H

/* The libraries that we'll need */
#include <unistd.h>
#include <stdarg.h>

/* Our printers */
int _putchar(char c);
int _puts(char *s);

/* printers.c modules */
/* The helper printer functions  */
int _print_char(va_list args);
int _print_string(va_list args);
int _print_int(va_list args);
void _integer_recursion(int integer);

/* print_format.c module */
/* The function that'll determine which specifer to print */
int _print_format(const char *format, va_list args);

/* The _printf function */
int _printf(const char *format, ...);

#endif
