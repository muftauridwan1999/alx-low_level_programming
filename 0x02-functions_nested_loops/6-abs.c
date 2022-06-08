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
printf("%d\n", c * -1); 
}
else if (c == 0)
{
printf("%d\n", 0);
}
else
{
printf("%d\n", c);
}
return (0);
}
