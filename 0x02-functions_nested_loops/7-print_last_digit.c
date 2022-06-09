#include "main.h"
/**
*  print_last_digit - last digit
*@b:last one
*@c: wow
* Return: Always 0.
*/
int print_last_digit(int b)
{
int c;
if (b < 0)
{
c = (-1 * (b % 10));
_putchar (c + '0');
return (c);
}
else
{
c = (b % 10);
_putchar (c + '0');
return (c);
}
}
