#include "main.h"
void jack_bauer(void)
{
int t;
int g;
for (t= 0; t < 24; t++)
for (g = 0; g < 60; g++)
_putchar('0' + t /10);
_putchar('0' + t % 10);
 _putchar(':');
_putchar('0' + g / 10 );
_putchar('0' + g % 10);
_putchar('\n');
}
