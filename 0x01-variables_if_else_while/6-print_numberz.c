#include <stdio.h>
/**
*
*main - Entry point
*Return: Always 0 (Success)
*priting numbers using putchar
*/
int main(void)
{
int c;
c = 0;
while (c <= 9)
{putchar('0' + c);
c++;
}
return (0);
}
