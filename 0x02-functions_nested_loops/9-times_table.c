#include "main.h"
#include <stdio.h>
void times_table(void)
{
int a;
int b;
int c;
for ( a = 0; a <= 9; a++)
{
 for ( b = 0 ; b <= 9; b++)
 {
  c = a * b;
 printf("%d", c);
  if ( b != 9)
  { 
   _putchar(',');
   _putchar (' ');
  }
}
}
}
