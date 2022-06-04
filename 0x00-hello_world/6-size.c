/**
* main - Entry point
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
char c;
int i;
double d;
double e;
float f;
printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu.\n", (signed long)sizeof(d));
printf("Size of long long int: %lu.\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
}
