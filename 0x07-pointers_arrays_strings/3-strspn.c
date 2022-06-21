#include "main.h"
#include <stdio.h>
/**
*_strspn - string length
*@s: first string
*@accept: second string
*Return: return c
*/
unsigned int _strspn(char *s, char *accept)
{
int m, n;
int i = 0;
for (m = 0; s[m] != '\0'; m++)
{
if (s[m] != 32)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[m] == accept[n])
i++;
}
}
else
return (i);
}
return (i);
}
