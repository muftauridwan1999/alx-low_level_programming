#include <stdio.h>
/**
*main - Entry point
*
*Return: ALways 0 (Success)
*
*combo3
*/
int main(void)
{
int a, b;
for (a = 0; a < 9; a++)
{
for (b = 0; b < 10; b++)
{
putchar ((a % 10) + '0');
putchar ((b % 10) + '0');
if (a == 8 && b == 9)
continue;
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
