#include "main.h"
#include <stdio.h>
void reset_to_98(int *n)
{
	int var;
	*n = 98;
	n = &var;
}
