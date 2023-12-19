#include "main.h"

/**
 * _islower - checks for a lowercase character using a function
 * @c: lettthat wil be tested
 * Return: Always 0 success
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
