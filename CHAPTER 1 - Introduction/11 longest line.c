#include <stdio.h>
#define MAXLINE 9999

int get_line(char line[], int maxline);
int strcopy(char src[], char dst[]);

int main ( ) {
	int len, max;
	char line[MAXLINE], maxl[MAXLINE];
	max = len = 0;
	
	printf("THIS PROGRAM RETURNS LINE WITH MAX LENGTH WHEN EOF INSERTED\n\n");
	while ((len = get_line(line, MAXLINE)) > 0) {
		printf("Length: %d\n\n", len); 
		if (len > max) {
			max = len;
			copy(line, maxl);
		}
	}
	printf("Max Length: %d\n Line: %s\n", max, maxl);
}

int get_line(char l[], int max) {
	int c, i;
	
	for(i = 0; i < max-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		l[i] = c;
	if(c == '\n') {
		l[i] = c;	// ENDL IS ALSO CHARACTER
		++i;
	}
	l[i] = '\0'; // TERMINATE STRING
	
	return i;
}

void copy(char s[], char d[]) 
{
	int i = 0;
	while ((d[i] = s[i])!= '\0')
		++i;
}
