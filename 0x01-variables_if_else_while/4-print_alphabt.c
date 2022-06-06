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
int c = 'a';
int b = 'f';
int a = 'r';
while (c <= 'd'){
putchar(c);
c++;}
while (b <= 'p'){
putchar(b);
b++;}
while (a <= 'z'){
putchar(a);
a++;}
return (0);
}
