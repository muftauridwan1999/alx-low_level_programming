#include "main.h"
#include <stdio.h>
/**
*_memset - setting a constant memory variable
*@s: string to be set constant
*@b: the constant string
*@n: at n string
*Return: string s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int m;
for(m = 0; m < n; m++)
{
s[m] = b;
}
return (s);
}
