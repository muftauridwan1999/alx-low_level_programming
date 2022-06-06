#include <stdio.h>
#include <stdlib.h>
/**
*
*main - Entry point
*
*Return: Always 0 (Success)
*
* base sixten printing in lower case
*/
int main(void)
{
int c = 0;
int wow = 'a';
while (c <= 9)
{
putchar('0' + c);
c++;
}
while (wow <= 'f')
{
putchar(wow);
wow++;
}
putchar('\n')
return (0);
}
