#include "main.h"
#include <stdio.h>
void times_table(void)
{
int a;
int b;
a = 0;
while (a <= 9)
{
b = 0;
while ( b <= 9)
{
printf("%d", b * a);
b++;
}
}
a++;
 if (b != 9)
{
 _putchar(',');
_putchar(' ');
_putchar('\n');
}
}
