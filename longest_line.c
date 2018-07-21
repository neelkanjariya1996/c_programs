#include <stdio.h>

#define MAX 256

void
copy2(char destination[], char source[])
{
	int i = 0;

	for (i = 0; source[i] != '\0'; i++)
		destination[i] = source[i];

	destination[i] = '\0';
}

int
getline2(char line[], int n)
{
	int len = 0;
	int c = 0;
	
	while ((c = getchar ()) != EOF) {
		if (c == '\n')
			break;

		line[len] = c;
		len = len + 1;
	}

	line[len] = '\0';
	len = len + 1;
	return len;
}

int
main ()
{	char curr_line[MAX] = {0};
	char longest_line[MAX] = {0};
	int max = 0;
	int len = 0;

	while ((len = getline2(curr_line,MAX)) > 0) {
		if (len > MAX)
			copy2(longest_line, curr_line);
	}

	printf("Longest line : %s\n", longest_line);

	return 0;
}
