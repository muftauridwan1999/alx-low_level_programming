#include "main.h"
void times_table(void)
{
int a;
int b;
a = 0;
while (a<= 9)
{
b = 0;
while ( b<= 9)
{
int m = b*a;
_putchar('0' + m);
b++;
}
a++;
_putchar('\n');
}
}
