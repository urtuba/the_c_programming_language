#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	printf("fahr\t  celc\n");
	
	for(int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%4d\t%6.2f\n", fahr, (5.0/9.0)*(fahr-32));
}
