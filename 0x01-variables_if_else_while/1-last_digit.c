#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point  
*Description: print thie last digit of the number n
*
*Return* Always 0 (Success)
*/

int main(void)
{
	int n, lastd;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

if (lastd > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (lastd == 0)
{
printf("last digit of %d is %d and is 0\n", n, n % 10);
}
else if (lastd < 6 && lastd != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}       	
return (0);
}
