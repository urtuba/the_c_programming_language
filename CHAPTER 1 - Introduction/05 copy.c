#include <stdio.h>

main()
{
	printf("Value of EOF: %d\n", EOF);
	printf("\nCOPY PROGRAM\nCopies your input to output:\n");	
	int c;
	
	while((c = getchar()) != EOF)
		putchar(c);
}
