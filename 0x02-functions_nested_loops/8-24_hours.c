#include "main.h"
void jack_bauer(void)
{
int t;
int g;
t = 0;
while (t < 24)
{
 g = 0;
while ( g < 60)
{
_putchar(t /10 + '0');
_putchar(t % 10 + '0');
 _putchar(':');
 t++;
_putchar(g / 10 + '0' );
_putchar(g % 10 + '0');
_putchar('\n');
 g++;
}
}
}
