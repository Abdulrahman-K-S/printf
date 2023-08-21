#include "main.h"

/**
 * _print_int - A function that counts up an integer and sends it to
 *              get printed to std.
 *
 * @args: The argument pointer.
 *
 * Return: The number of integers printed.
*/

int _print_int(va_list args)
{
	int count = 1, toprint = 0;
	unsigned int arg = 0;

	arg = va_arg(args, int);
	toprint = arg;

	if (toprint < 0)
	{
		_putchar('-');
		toprint *= -1;
		arg = toprint;
		count++;
	}
	while (arg > 9)
	{
		arg /= 10;
		count++;
	}

	return (count);
}
