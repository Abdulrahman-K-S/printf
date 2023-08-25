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
	_putchar(va_arg(args, int));

	return (1);
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
	unsigned int t = integer;

	if (t / 10)
		_integer_recursion(t / 10);
	_putchar(t % 10 + '0');
}

/**
 * _print_binary - takes a decimal number and prints a binary one
 * @args: argument pointer
 *
 * Return: the number of binary numbers
*/
int _print_binary(va_list args)
{
	unsigned int arg;
	long to_print = 0;
	long answer = 0;
	int count = 1;

	arg = va_arg(args, long);
	to_print = arg;
	while (arg > 1)
	{
		arg /= 2;
		count++;
	}
	answer = recursion_binary(to_print);
	_long_recursion(answer);
	return (count);

}
/**
 * recursion_binary - takes a decimal number and returns binary
 * @b: decimal integer input
 *
 * Return: binary number
*/
long recursion_binary(long b)
{
	if (b < 2)
		return (b);

	return (recursion_binary(b / 2) * 10 + b % 2);
}
/**
 * _long_recursion - takes a binary number and prints it
 * @binary: binary
 *
 * Return: nothing
*/
void _long_recursion(long binary)
{
	if (binary / 10)
		_long_recursion(binary / 10);
	_putchar(binary % 10 + '0');
}
