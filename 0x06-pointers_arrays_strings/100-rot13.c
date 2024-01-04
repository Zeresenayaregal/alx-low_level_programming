#include "main.h"
#include <stdio.h>

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = 
		"ABCDEFJHIJKLMNOPQRSTUVWXYZabcdefjhijklmnopqrstuvwxyz";
	char datarot[] = 
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
