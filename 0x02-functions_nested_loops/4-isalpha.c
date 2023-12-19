#include "main.h"

/**
 *_isalpha - checks for a alphabetic character using a function
 *@c: letter being tested
 * Return: Always 0 succesS
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
