#include "main.h"
#include <stdio.h>
int _strlen(char *s)
{
int l = 0;
while (s[l] != '\0')
{
	l++;
}

return (l);
}