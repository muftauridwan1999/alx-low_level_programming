#include "main.h"
#include <stdio.h>
/**
*
* _strcat- function that concatenates two strings.
*
*
*
 * @dest: pointer to destination char

 * @src: pointer to the source char

 * Return: char
*
 */
char *_strcat(char *dest, char *src)
{
int i,j;
i = 0;
while (dest[i] != '\0')
{
	i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
