#include "main.h"
void jack_bauer(void)
{
int t;
int g;
for (t= 0; t < 24; t++)
for (g = 0; g < 60; g++)
_putchar(t /10 + '0');
_putchar(t % 10 + '0');
 _putchar(':');
_putchar(g / 10 + '0' );
_putchar(g % 10 + '0');
_putchar('\n');
}
