#include "main.h"

/**
 * _print_octal - A function to print the octal integer.
 *
 * @args: Argument pointer.
 *
 * Return: Length of the characters printed.
*/
int _print_octal(va_list args)
{
	int length = 1;
	unsigned int arg, temp;

	arg = va_arg(args, unsigned int);
	temp = arg;

	while (temp > 9)
	{
		temp /= 8;
		length++;
	}

	_octal_recursion(arg);
	return (length);
}

/**
 * _octal_recursion - A function that uses recursion to print the
 *                    unsigned octal integer.
 *
 * @integer: The octal to be printed.
*/
void _octal_recursion(int integer)
{
	unsigned int t = integer;

	if (t / 8)
		_octal_recursion(t / 8);
	_putchar(t % 8 + '0');
}
