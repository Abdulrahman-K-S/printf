#include "main.h"

/**
 * _print_binary - A function that voncerts an unsigned int into binary
 *                 and prints it.
 *
 * @args: Argument pointer
 *
 * Return: The number of characters printed.
*/
int _print_binary(va_list args)
{
	int length = 1;
	unsigned int arg, temp;

	arg = va_arg(args, unsigned int);
	temp = arg;

	while (temp > 1)
	{
		temp /= 2;
		length++;
	}

	_binary_recursion(arg);
	return (length);
}

/**
 * _binary_recursion - A function that uses recursion to print out the
 *                     the integer it recived in binary.
 *
 * @integer: The integer to be printed.
*/
void _binary_recursion(int integer)
{
	unsigned int t = integer;

	if (t / 2)
		_binary_recursion(t / 2);
	_putchar(t % 2 + '0');
}

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
	unsigned int arg, temp;

	arg = va_arg(args, unsigned int);
	temp = arg;

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
