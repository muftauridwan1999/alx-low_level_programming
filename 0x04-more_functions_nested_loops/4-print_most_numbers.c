#include "main.h"
void print_most_numbers(void)
{
int c;
for ( c = 0; c < 10; c++)
{
if (c != 2 && c != 4)
{
_putchar( '0' + c);
}
}
_putchar('\n');
}
