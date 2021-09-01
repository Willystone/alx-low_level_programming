#include "holberton.h"

/**
 * print_alphabet - Prints lowercase alphabet 10 times.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char n;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}

		_putchar('\n');
		i++;
	}
}
