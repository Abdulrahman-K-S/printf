#include "main.h"

/**
 * _print_format - A function that determines which of the formate is
 *                 a specifer and which is just a normal character
 *                 and deal with them accordingly.
 *
 * @format: The inputed string from the _printf function.
 * @args: Argument pointer.
 *
 * Return: The number of characters printed.
*/

int _print_format(const char *format, va_list args)
{
	int length = 0, i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			// Then i have met a specifer

			if (format[i + 1] == '\0')
				return (length);

			i++; // Now to check from after the '%'

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				length += _putchar(format[i]);
			else if (format[i] == 'c')
				length += _putchar(format[i]);
			else if (format[i] == 's')
				length += _puts(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				length += _print_int(args);
		}
		else
			// Then there's no specifer just a character
			length += _putchar(format[i]);

		i++;
	}

	return (length);
}
