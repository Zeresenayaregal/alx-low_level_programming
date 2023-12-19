#include "main.h"

/**
 *  * print_sign - prints the sign of a numbers using function
 *   *@n: number being tested
 *    * Return: Always 0 success.
 *     */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchat(',');
		_putchat(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchat(',');
		_putchat(' ');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchat(',');
		_putchat(' ');
		return (-1);
	}
	return (0);
}
