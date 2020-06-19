#include <stdio.h>
#define MAXLEN 512

/* IT REVERSES LINE SRINGS */

int get_line(char s[], int maxlen) 
{
	int i,c;
	
	for (i = 0; i < (maxlen - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	
	s[i] = '\0';
	return i;
}

void reverser(char src[], char dst[], int len)
{
	int i, j;
	j = 0;
	
	for(i = len-1; i >= 0; --i) {
		dst[j] = src[i];
		j++;
	}
	
	dst[j] = '\0';
}

int main () 
{
	char str[MAXLEN];
	char str_rev[MAXLEN];
	int a;
	
	while ((a = get_line(str, MAXLEN)) > 0) {
		reverser(str, str_rev, a);
		printf("%s\n\n", str_rev);
	}
	
	return 0;
}
