#include <stdio.h>
#define IN	1
#define OUT	0

main() 
{
	/* THE PROGRAM COUNTS WORD NUMBER */
	
	int c, status, nw;
	printf("WORD COUNTER, TYPE A TEXT THEN EOF: \n");
	
	nw = 0;
	status = OUT;
	while ((c = getchar()) != EOF) 
	{
		if(c == ' ' || c == '\n' || c == '\t')
			status = OUT;
		else if (status == OUT) {
			status = IN;
			nw++;
		}
	}
	
	printf("\nWORD COUNT: %d\n", nw);
}
