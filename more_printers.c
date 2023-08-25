#include "main.h"

/**
 * _print_unsigned - A function to print the unsigned integer.
 *
 * @args: Argument pointer
 *
 * Return: Length of the printed characters.
 */
int _print_unsigned(va_list args)
{
	int length = 1;
	unsigned arg, temp;

	arg = va_arg(args, unsigned int);
	temp = arg;

	if (temp < 0)
	{
		_putchar('-');
		temp *= -1;
		arg = temp;
		length++;
	}
	while (arg > 9)
	{
		arg /= 10;
		length++;
	}

	_unsigned_recursion(temp);
	return (length);
}

/**
 * _unsigned_recursion - A function that uses recursion to print out
 *                       the unsigned integer.
 *
 * @integer: The integer to be printed.
 */
void _unsigned_recursion(int integer)
{
	unsigned int t = integer;

	if (t / 10)
		_unsigned_recursion(t / 10);
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
