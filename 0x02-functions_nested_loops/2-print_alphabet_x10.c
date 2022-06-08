#include "main.h"
/**
*print_alphabet_x10 - printing alphabet in lower case 10 times
*
* Return: always 0.
*/
void print_alphabet_x10(void)
{
char c = 0;
char b;
while (c < 10)
{
b = 'a';
while (b <= 'z')
{
_putchar(b);
b++;
}
_putchar('\n');
c++;
}
}
