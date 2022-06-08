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
_putchar('0' + (b * a));
b++;
}
a++;
_putchar(',');
_putchar(' ');  
_putchar('\n');
}
}
