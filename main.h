#ifndef MAIN_H
#define MAIN_H

/* The libraries that we'll need */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* Our printers */
int _putchar(char c);
int _puts(char *s);

/* The helper printer functions  */
int _print_int(va_list args);

/* The _printf function */
int _printf(const char *format, ...);

#endif
