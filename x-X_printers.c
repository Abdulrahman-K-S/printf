#include "main.h"

/**
 * _print_hex - A function that prints the hex integer (lowercase).
 *
 * @args: Argument pointer.
 *
 * Return: Length of the characters printed.
*/
int _print_hex(va_list args)
{
	int length = 1, remainder;
	unsigned int temp, arg;

	arg = va_arg(args, unsigned int);
	temp = arg;

	while (temp > 9)
	{
		temp /= 16;
		length++;
	}

	_hex_recursion(arg);
	return (length);
}

/**
 * _print_HEX - A function that prints the hex integer (uppercase).
 *
 * @args: Argument pointer.
 *
 * Return: Length of the characters printed.
*/
int _print_HEX(va_list args)
{
	int length = 1, remainder;
	unsigned int temp, arg;

	arg = va_arg(args, unsigned int);
	temp = arg;

	while (temp > 9)
	{
		temp /= 16;
		length++;
	}

	_HEX_recursion(arg);
	return (length);
}

/**
 * _hex_recursion - A Function that uses recursion to print the lowercase
 *                  hex integer.
 *
 * @integer: The hex to be printed
*/
void _hex_recursion(int integer)
{
	unsigned int t = integer;

	if (t / 16)
		_hex_recursion(t / 16);
	_putchar(t % 16 < 10 ? t % 16 + '0' : t % 16 + 'a' - 10);
}

/**
 * _HEX_recursion - A Function that uses recursion to print the uppercase
 *                  hex integer.
 *
 * @integer: The HEX to be printed
*/
void _HEX_recursion(int integer)
{
	unsigned int t = integer;

	if (t / 16)
		_HEX_recursion(t / 16);
	_putchar(t % 16 < 10 ? t % 16 + '0' : t % 16 + 'A' - 10);
}
