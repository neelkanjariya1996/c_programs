#include <stdio.h>

#define MAX 100
#define LIMIT 80

int
getlength (char line1[], int lim)
{
	int i = 0, c = 0;
	
	for (i = 0; ((c = getchar ()) != EOF) && c != '\n' && i < lim - 1; i++)
		line1[i] = c;
	if (c == '\n') {
		line1[i] = c;
		i++;
	}

	return i;
}

int
main ()
{	
	int len = 0, i = 0;
	char line[MAX] = {0};
	
	len = getlength(line, MAX);
	if (len >= LIMIT) {
		for (i = 0; i < len; i++)
			printf("%c", line[i]);
	}
	return 0;
}
