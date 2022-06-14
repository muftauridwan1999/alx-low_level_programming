#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{

	int aux;
	n = 0;
	
	while (a[n] != '\0')
	for  (aux= 0; aux < n; aux++)
	{
	printf("%d, ", a[aux]);
	}

{
	printf("\n");
}
}
