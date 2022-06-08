#include "main.h"
/**
*_isalpha - checking alphabetic character
*@c: lowercase or uppercase
*Return: 0 or 1
*/
int _isalpha(int c)
{
if ((c > 'a' || c > 'A') && (c < 'z' || c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
