#include "main.h"
/**
*print_alphabet - printging of lower case
*Return: Always 0.
*printing the lower case of letters using my own header file
*/
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
