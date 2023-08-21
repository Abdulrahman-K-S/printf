#include "main.h"

/**
 * _puts - prints a string
 * @s: string input
 *
 * Return: always 0
*/
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\0');
	return (i);
}
