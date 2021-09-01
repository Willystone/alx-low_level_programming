#include "holberton.h"

/**
 * print_alphabet - Prints lowercase alphabet 10 times.
 */

void print_alphabet(void)
{
	int i = 0;
	char abc;

	while (i < 10)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}

		_putchar('\n');
		i++;
	}
}
