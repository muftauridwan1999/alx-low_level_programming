#include "main.h"
#include <stdio.h>
/**
*_strchr - string character
*@s: the string
*@c: string to check
*Return: null or s
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
