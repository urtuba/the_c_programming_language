#include <stdio.h>

main()
{
		/* A PROGRAM TO COUNT 
		 * TABS, SPACES AND NEWLINES */
		 
		printf("ENTER A STRING, THEN EOF: \n");
		
		int c, nl, nt, ns;
		
		nl = 0;
		nt = 0;
		ns = 0;
		while((c = getchar()) != EOF) {
			if(c == '\n')
				++nl;
			if(c == '\t')
				++nt;
			if(c == ' ')
				++ns;
		}
		
		printf("New Lines: %d\n", nl);
		printf("Spaces: %d\n", ns);
		printf("Tabs: %d\n", nt); 
		
}
