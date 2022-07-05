#include "stdio.h"
/**
 * main - Print all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;
k = 48;
while (k <= 57)
{
putchar(k);
if (k < 57)
{
putchar(',');
putchar(' ');
}
k++;
}
putchar('\n');
return (0);
}
