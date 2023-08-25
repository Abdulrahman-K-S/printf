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
	static int i;
	static char buf[OUT_BUF_S];

	if (c == BF_FLUSH || i >= OUT_BUF_S)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BF_FLUSH)
		buf[i++] = c;
	return (1);
}
