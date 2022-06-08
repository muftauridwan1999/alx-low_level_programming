#include "main.h"
/**
*print_last_digit - to printing the last digit
*Return: ALways 0.
*/
int print_last_digit(int b)
{
int c;
if (n < 0)
{
c = (-1 * (n % 10));
_putchar (c + '0');
return (c);
}
else
{
c = b % 10;
_putchar (c + '0');
 return (c);
}
}
