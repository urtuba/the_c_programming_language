#include <stdio.h>

main()
{
	printf("CHARACTER COUNTER PROGRAM\n\nTYPE:\n");
	
	long nc;
	
	/* EOF input is Control+D for linux cmd,
	 * it may vary in other OS						*/
	 
	for(nc = 0; getchar() != EOF; ++nc)
		;
	
	printf("\n\nCharacter Count: %d\n", nc);

}
