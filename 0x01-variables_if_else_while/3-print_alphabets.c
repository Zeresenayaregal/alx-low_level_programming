#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k;

for (k = 97; k <= 122; k++)
{
putchar(k);
}
if (k > 57)
{
for (k = 65; k <= 90; k++)
{
putchar(k);
}
}
putchar('\n');
return (0);
}
