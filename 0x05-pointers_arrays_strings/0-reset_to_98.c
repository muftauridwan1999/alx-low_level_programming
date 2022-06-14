#include "main.h"
#include <stdio.h>
/**
*reset_to_98 - changing varaible value by pointer
*@var: an int
*
*/
void reset_to_98(int *n)
{
	int var;
	*n = 98;
	n = &var;
}
