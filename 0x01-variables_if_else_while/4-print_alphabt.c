#include <stdlib.h>
#include <stdio.h>
/**
*
*main - Entry point 
*
*Return: Always 0 (Success)
*prints the alphabet in lowercase, followed by a new line except letter e and q
*
*/
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
