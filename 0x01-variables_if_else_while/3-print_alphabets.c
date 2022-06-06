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
int b;
b = 'A';
c = 'a';
while (c <= 'z')
{putchar(c);
c++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
