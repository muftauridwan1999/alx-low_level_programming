#include "main.h"
/**
*_islower -  function that checks for lower character
*@c - alphabet
*Return: always 0 if true else return 1
*/
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}
