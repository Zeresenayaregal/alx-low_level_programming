#include "main.h"

/**
 *_abs - checks for a absolute value of integer using a function
 *@n: integer being tested
 * Return: Always 0 succesS
 */


int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n / -1);
}
