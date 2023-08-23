#include "main.h"

/**
 * dec_binary - takes a decimal number and prints a binary one
 * @args: argument pointer
 *
 * Return: the number of binary numbers
*/
int dec_binary(va_list args)
{
	unsigned int arg;
	long to_print = 0;
	long answer = 0;
	int count = 1;

	arg = va_arg(args, long);
	to_print = arg;

	if (arg < 0)
	{
		_putchar('1');
		to_print *= -1;
		arg = to_print;
		count++;
	}

	while (arg > 0)
	{
		arg /= 2;
		count++;
	}
	answer = recursion_binary(to_print);
	_long_recursion(arg);
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
	unsigned int t = binary;

	if (t / 10)
		_long_recursion(t / 10);
	_putchar(t % 10 + '0');
}
