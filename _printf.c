#include "main.h"

/**
 * _printf - A function that produces output according to a format.
 *
 * @format: Is a character format string.
 *
 * Return: Number of chars printed.
*/

int _printf(const char *format, ...)
{
	int length;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	length = _print_int(args);
	va_end(args);

	return (length);
}
