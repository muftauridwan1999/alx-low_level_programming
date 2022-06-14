#include "main.h"
#include <stdio.h>
/**
*swap_int - swapping intergers
*@a: the pointer
*@b: the secoond to be interchanged
*/
void swap_int(int *a, int *b)
{
int trinity;
trinity = *a;
*a = *b;
*b = trinity;
}
