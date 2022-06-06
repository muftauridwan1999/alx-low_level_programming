#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*
*printing alphabets in lowercase
*
*/
int main(void)
{
int c;
c = 'a';
while (c <= 'z')
{
putchar(c);
putchar('\n')
c++;
}
return (0);
}
