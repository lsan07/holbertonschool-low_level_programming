#include <stdio.h>

/**
*main - printf - sizeof
*
*Return: 0
*/
int main(void)
{
printf("%lu\n", sizeof(char));
printf("%lu\n", sizeof(int));
printf("%lu\n", sizeof(long int));
printf("%lu\n", sizeof(long long));
printf("%lu", sizeof(float));
return (0);
}
