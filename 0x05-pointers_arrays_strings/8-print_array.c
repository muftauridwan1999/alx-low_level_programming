#include "main.h"
#include <stdio.h>
/**
*print_array - printing array
*@a: string
*@n: int
*/
void print_array(int *a, int n)
{
int aux;
for (aux = 0; aux < n; aux++)
{
printf("%d", a[aux]);
if (aux < n - 1)
	printf(", ");
}
{
	printf("\n");
}
}
