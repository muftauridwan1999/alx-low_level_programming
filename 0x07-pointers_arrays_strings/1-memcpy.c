#include "main.h"
#include <stdio.h>
/**
*_memcpy - memory coping function
*@dest: first string
*@src: second string
*@n: bytes
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int m;
for (m = 0; m < n; m++)
{
dest[m] = src[m];
return (dest);
}
}
