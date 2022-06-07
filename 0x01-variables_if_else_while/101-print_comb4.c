#include <stdio.h>
/**
*main - Entry point
*Return: ALways 0 (Success)
*combo 4
*/
int main(void)
{
int m, n, o;
for (m = 0; m < 9; m++)
{
for (n = m + 1; n < 9; n++)
{
for (o = m + 1; o < 9; o++)
{
putchar((m % 10) + '0');
putchar((n % 10) + '0');
putchar((o % 10) + '0');
if (m == 7 && n == 8 && 0 == 9)
continue;
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
