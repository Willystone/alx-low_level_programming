#include "holberton.h"

/**
 * Print_alphabet - prints the alphabet in lowercasing.
 *
 */

void print_alphabet(void)

{
	char a;

	for(a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
