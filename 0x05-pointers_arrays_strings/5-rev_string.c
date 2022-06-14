#include "main.h"
/**
*rev_string - reverse string
*@s: the string
*
*/
#include <stdio.h>
void rev_string(char *s)
{
int st = 0;
int ri = 0;
char ng;
while (s[st] != '\0')
st++;
st--;
while (ri < st)
{
ng = s[st];
s[st] = s [ri];
s[ri] = ng;
ri++;
st--;
}
}
