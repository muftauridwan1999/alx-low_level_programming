#include "main.h"
#include <stdio.h>
/**
*_strbrk - searching for string in byte
*@s: first string
*@accept: second
*@return: c or null
*/
char *_strpbrk(char *s, char *accept)
{
int m;
while (*s)
{
m = 0;
while (accept[m])
{
if (*s == accept[m])
return (s);
m++;
}
s++;
}
return (NULL);
}
