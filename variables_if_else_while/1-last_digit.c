#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - rand find the number aleatory
 *
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

l - n % 10;
if (l > 5)
	printf("%i and is greater than\n" n, l);
else
	if (l == 0)
		printf("%iand is 0\n" n, l);
else
	if (l > 0)
		printf("%i and is less than 6 and not 0\n" n, l);
return (0);
}
