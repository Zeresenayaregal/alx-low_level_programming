#include "main.h"
/**
 * print_alphabet_x10 - Print alphabets using a function.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar (y);
		}
		_putchar ('\n');
	}
}
