#include <stdio.h>

int
main ()
{
	int c = 0, nb = 0, nt = 0, nl = 0;
	
	c = getchar ();
	while ((c = getchar ()) != EOF) {
		if (c == ' ')
			nb++;
		else if (c == '\t')
			nt++;
		else if (c == '\n')
			nl++;
	}

	printf("The number of blanks : %d\n", nb);
	printf("The number of tabs : %d\n", nt);
	printf("The number of new lines : %d\n", nl);
	return 0;
}
