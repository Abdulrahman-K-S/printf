#include "main.h"

/**
 * _putchar - A function that writes out a character.
 *
 * @c: A character entered to write to std.
 *
 * Return: 1 if the write was successful otherwise -1.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
