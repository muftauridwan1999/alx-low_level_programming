#include "main.h"
void jack_bauer(void)
{
int t;
int g;
t = 0;
g = 0;
while (g < 24)
{
_putchar('0' + g / 10 );
_putchar('0' + g % 10);
_putchar(':');
_putchar('\n');
g++;
}
while (t < 60)
{
_putchar('0' + t /10);
_putchar('0' + t % 10);
t++;
_putchar('\n');
}
}