#include "main.h"
void reverse_array(int *a, int n)
{
int i = 0;
int j = 0;
int *in, *fi;
int aux = 0;
n--;
in = a;
fi =a;
while (i < n)
	i++;
while (j <= i)
{
 aux = *(in + j);
*(in + j) = *(fi + i);
*(fi + i) = aux;
j++;
i--;
}
}
