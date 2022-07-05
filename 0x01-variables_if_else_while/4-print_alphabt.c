#include "stdio.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int p;
for (p = 97; p <= 122; p++)
{
if (p == 113 || p == 101)
{
continue;
}
else
{
putchar(p);
}
}
putchar('\n');
return (0);
}
