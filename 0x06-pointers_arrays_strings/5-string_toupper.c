#include "main.h"
char *string_toupper(char *one)
{
int i;
for (i = 0; one[i] != '\0'; i++)
{
	if (one[i] >= 'a' && one[i] <= 'z')
	{ one[i] = one[i] - 32;
	}
}
return (one);
}

