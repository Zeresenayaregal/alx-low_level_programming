#include "main.h"

/**
 * print_alphabet - Print alphabets using a function.
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 97; x <= 122; x++)
	{
		_putchar (x);
	}
	_putchar ('\n');
}
