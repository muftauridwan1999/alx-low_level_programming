#include <stdio.h>
#include <stdlib.h>
int main (int argc, *argv[])
{
  int i, n;
  i = 0;
  n = 0;
  if (argc < 2)
  {
    printf("0\n");
    return (0);
  }
  else if (i <= 9)
  {
 n = n + argv[i];
   printf("%d\n, n);
  }
else
 {
   printf("Error\n");
   return (1);
 }
 return (0);
}
