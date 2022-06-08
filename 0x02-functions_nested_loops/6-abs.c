#include "main.h"
#include <stdio.h>
/**
*main - check the code
*_abs - finding absolute value
*Return: always 0.
*/
int _abs(int c)
{
if (c < 0)
{
int m = ((-1) * c);
printf("%d\n", m); 
}
else
{
printf("%d\n", c);
}
return (0);
}
