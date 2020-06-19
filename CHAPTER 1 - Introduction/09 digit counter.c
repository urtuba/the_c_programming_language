#include <stdio.h>

main()
{
	/* PROGRAM THAT COUNTS DIGITS,
	 * WHITE SPACES AND OTHERS      */
	
	int ndigit[10];
	int i, c, nwhites, nothers;

	nwhites = nothers = 0;
	
	for(i = 0; i < 10; i++)
		ndigit[i] = 0;
	
	while ((c = getchar()) != EOF ){
		if (c == ' ' || c == '\n' || c == '\t') 
			++nwhites;
		else if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else 
			++nothers;
	}
		
	printf("Number Of Digits:");
	for (i = 0; i < 10; i++)
		printf(" %d", ndigit[i]);
	printf("\nNumber of White Spaces: %d\nNumber of Others: %d\n", nwhites, nothers);
}	
