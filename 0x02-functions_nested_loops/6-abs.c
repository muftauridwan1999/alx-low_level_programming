#include "main.h"
#include <stdio.h>
/**
*_abs - finding absolute value
*@c: abs
*Return: always 0.
*/
int _abs(int c)
{
if (c < 0)
{
c = (-1) * c;
return (c);
}
else if (c == 0)
{
return (0);
}
else
{
return (c);
}
}
