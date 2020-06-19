#include <stdio.h>
#define UNDEFINED 9999999;

int main( ) {
	int i;

	for (i = 0; i <= 10; i++)
		printf("%2d\t%6d\n", i, power(2, i));
}

int power (int base, int exponent)
{
    /* POWER FUNCTION THAT WORKS WITH POSITIVE ARGUMENTS */
	int result;
	
	if (exponent == 0)
		return 1;
    for (result = 1; exponent > 0; --exponent)
        result = result * base;
    return result;
}
