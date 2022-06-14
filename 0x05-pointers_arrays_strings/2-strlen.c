#include "main.h"
#include <stdio.h>
/**
* _strlen - getiing length of the string
*
*@s: important
*return: always success
*/
int _strlen(char *s)
{
int l = 0;
while (s[l] != '\0')
{
	l++;
}

return (l);
}
