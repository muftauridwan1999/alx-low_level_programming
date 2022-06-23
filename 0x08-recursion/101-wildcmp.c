#include "main.h"
/**
*wildcmp - comparison
*@s1: string 1
*@s2: string two
*Return: 1 or 0
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
return (1);
}
else
{
return (0);
}
}
