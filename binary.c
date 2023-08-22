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
	int to_print = 0;
	int answer = 0, count = 1;

	arg = va_arg(args, int);
	to_print = arg;
	while (arg > 1)
	{
		arg /= 2;
		count++;
	}
	answer = recursion_binary(to_print);
	_integer_recursion(answer);
	return (count);

}

/**
 * recursion_binary - takes a decimal number and returns binary
 * @b: decimal integer input
 *
 * Return: binary number
*/
int recursion_binary(int b)
{
	if (b < 2)
		return (b);

	return (recursion_binary(b / 2) * 10 + b % 2);
}
