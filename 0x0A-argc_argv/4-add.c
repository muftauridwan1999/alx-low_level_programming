#include <stdio.h>
#include <stdlib.h>
/**
*main - the prototype 
*@argc: argument count only
*@argv: argument vector
*Return: 0
*/
int main (int argc, char *argv[])
{
  int i, n, d;
  n = 0;
  if (argc < 2)
  {
    printf("0\n");
    return (0);
  }
  for (i = 0; i < argc; i++)
  {
    for (d = 0; argv[i][d] != '\0'; d++)
    {
      if (argv[i][d] < '0' || argv[i][d] > '9')
      {printf("Error\n");
       return (1);}
    }
    n = n + atoi(argv[i]);
   }
   printf("%d\n", n);
    return (0);
}
                 
