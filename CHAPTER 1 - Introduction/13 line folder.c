#include <stdio.h>
#define MAXLINE 9999

int len;
char line[MAXLINE];

int get_line(void);
void fold_line(void);

int main()
{
	printf("HELLO I FOLD LINES THAT YOU WRITE: \n\n");
	while(get_line() > 1)
		fold_line();
}



int get_line(void)
{
	int c, i;
	extern char line[];
	extern int len;
	
	for (i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	
	len = i;
	return len;
}

void fold_line(void)
{
	extern int len;
	extern char line[];
	int fold_size;
	
	if(len < 100)
		fold_size = len / 2;
	else
		fold_size = 50;
	
	int a = 0;
	
	while (line[a] != '\0') {
		putchar(line[a]);
		if(a % fold_size == fold_size-1)
			putchar('\n');
		a++;
		}
	putchar('\n');
}


