#include <stdio.h>

int
main ()
{
	int c = 0, i = 0;

	for (i = 0; i <= 10; i++) {
		c = getchar ();
		if (c == EOF)
			printf("The value of EOF is %d : \n", c);
	}

	return 0;
}
