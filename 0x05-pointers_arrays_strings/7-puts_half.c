#include "main.h"
/**
*puts_half - half printing of input
*@str: string
*/
void puts_half(char *str)
{
int x = 0;
int n = 0;
while (str[x] != '\0')
x++;
n = x / 2;
if (x % 2 == 1)
n++;
while (str[n] != '\0')
{
	_putchar(*(str + n));
	n++;
}
_putchar('\n');
}
