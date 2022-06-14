#include "main.h"
/**
*_strcpy - copy string
*@src: wow
*@dest: me
*Return: success
*/
char *_strcpy(char *dest, char *src)
{
int z;
for (z = 0; src[z] != '\0'; z++)
{
dest[z] = src[z];
}
dest[z] = '\0';
return (dest);
}
