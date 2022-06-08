#include "main.h"
/**
*main - check the code
*Return: Always 0.
*printing the lower case of letters using my own header file
*/
void print_alphabet(void)
{
char c = 'a';
while ( c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
