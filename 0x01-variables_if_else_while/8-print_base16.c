#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
		putchar(k);
	}
	if (k > 57)
	{
		for (k = 97; k <= 102; k++)
		{
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
