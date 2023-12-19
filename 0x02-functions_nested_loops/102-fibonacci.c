#include "stdio.h"
/**
 * main - fibonacci 50
 *
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int sum = 0;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int s = 0;

	while (s != 50)
	{
		sum = a + b;
		if (s != 49)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu", sum);
		}
		a = b;
		b = sum;
		s++;
	}
	printf("\n");
	return (0);
}
