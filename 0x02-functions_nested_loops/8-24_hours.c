#include "main.h"
void jack_bauer(void)
{
int t;
int g;
t = 0;
g = 0;
while (g < 60)
 while (t < 24)
_putchar('0' + t /10);
_putchar('0' + t % 10);
 _putchar(':');
t++;
_putchar('0' + g / 10 );
_putchar('0' + g % 10);
_putchar('\n');
g++;
}
