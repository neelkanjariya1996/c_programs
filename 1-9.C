#include <stdio.h>

int
main ()
{
	int c = 0, a =0;
	c = getchar ();
	while ((c = getchar ()) != 0) {
		if (c == ' ' || c == '\t' || c == '\n')
			c  = ' ';
		printf("%d", c);
	}
	return 0;
}
