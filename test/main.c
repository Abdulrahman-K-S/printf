#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "_putchar.c"


void _printf(unsigned int n, ...);
void _print_a_string(va_list ap);

int main(void)
{
	_printf(5, 'h', 'e', 'l', 'l', 'o');

	return (0);
}

void _printf(unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		_putchar(va_arg(ap, int));
		_putchar('\n');
		i++;
	}

	va_end(ap);
}
