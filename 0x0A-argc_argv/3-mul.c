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
  int i,c, mul;
  if (argc != 3)
  {
    printf("Error\n");
      return (1);
  }
  else
  {
   i = atoi(argv[1]);
   c = atoi(argv[2]);
   mul = i * c;
    printf("%d\n", mul);
  }
  return (0);
}
