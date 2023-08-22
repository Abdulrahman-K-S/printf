#include "main.h"

/**
 * _print_char - A function that prints a character from the
 *               argument pointer recieved.
 *
 * @args: Argument pointer.
 *
 * Return: 1 which is the character printed.
*/
int _print_char(va_list args)
{
	int length = 0;
	char arg;

	arg = va_arg(args, char);

	if (!arg)
	{
		length = _puts("(null)");
	}
	else
	{
		length = _putchar(arg);
	}
	return (length);
}

/**
 * _print_string - A function that'll print a string from the
 *                 argument pointer it recived.
 *
 * @args: Argument pointer.
 *
 * Return: The number of characters printed.
*/
int _print_string(va_list args)
{
	int length = 0;
	char *arg;

	arg = va_arg(args, char *);

	if (!arg)
	{
		length = _puts("(null)");
	}
	else
	{
		length = _puts(arg);
	}
	return (length);
}

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

	_integer_recursion(toprint);
	return (count);
}

/**
 * _integer_recursion - A function that uses recursion to print out the
 *                      the integer it recived.
 *
 * @integer: The integer to be printed.
*/
void _integer_recursion(int integer)
{
	if (integer / 10)
		_integer_recursion(integer / 10);
	_putchar(integer % 10 + '0');
}
