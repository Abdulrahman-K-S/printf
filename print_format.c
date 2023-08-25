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
			/* Then i have met a specifer */

			if (format[i + 1] == '\0')
				return (-1);

			i++; /* Now to check from after the '%' */

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				length += _putchar(format[i]);
			else if (isValidSpecifier(format[i]))
				length += _print_specifier(format[i], args);
			else
			{
				length += _putchar('%');
				length += _putchar(format[i]);
			}
		}
		else
			/* Then there's no specifer just a character */
			length += _putchar(format[i]);

		i++;
	}

	return (length);
}

/**
 * isValidSpecifier - A function that checks if the inputed argument is a valid
 *                    specifier or not.
 *
 * @type: The char to check if it's valid or not.
 *
 * Return: (1) if it's valid otherwise (0).
 */
int isValidSpecifier(char type)
{
	char types[] = {'c', 's', 'd', 'i', 'b', 'u', 'o', 'x', 'X'};
	int i = 0;

	while (types[i])
	{
		if (types[i] == type)
			return (1);

		i++;
	}

	return (0);
}

/**
 * _print_specifier - A function that takes a specifier and calls it's
 *                    respective function.
 *
 * @format: The char specifier.
 * @args: Argument pointer.
 *
 * Return: The length of what got printed.
 */
int _print_specifier(char format, va_list args)
{
	int i = 0, length = 0;
	spec_t types[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"d", _print_int},
		{"i", _print_int},
		{"b", _print_binary},
		{"u", _print_unsigned},
		{"o", _print_octal},
		{"x", _print_hex},
		{"X", _print_HEX},
		{NULL, NULL}
	};

	while (types[i].specifier)
	{
		if (*types[i].specifier == format)
			length += types[i].f(args);

		i++;
	}

	return (length);
}
